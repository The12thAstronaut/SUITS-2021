param (
    [Parameter(Mandatory = $true)]
    [ValidateSet("test","upgrade")]
    [string]$operation,
    [Parameter(Mandatory = $true)]
    [string]$searchFolder,
    [string]$logPath = $PSScriptRoot)

function Write-ToUpdateLog(
    [Parameter(Mandatory=$true)][string]$file,
    [Parameter(Mandatory=$true)][string]$msg
) {
    $logFile = "$logPath/ShaderUpgrade.log"
    Write-Output " > $msg" >> $logFile
    Write-Output $file >> $logFile
    Write-Output "" >> $logFile
    Write-Output "" >> $logFile
}

function Get-GuidFromMetaFile([Parameter(Mandatory=$true)]$file) {
    if ($file.GetType() -ne [string]) {
        $file = $file.FullName
    }
    if (-not ($file.EndsWith(".meta"))) {
        $file = "$file.meta"
    }
    if (-not (Test-Path $file)) {
        throw "File does not exist. Cannot extract meta info from $file"
    }
    $content = Get-Content $file
    $match = ($content | Select-String "guid: ([0-9a-zA-Z]+)")
    if (-not $match) {
        throw "Could not extract guid from meta file"
    }
    return $match.Matches[0].Groups[1].Value
}

function Test-ShaderUsed(
    [Parameter(Mandatory=$true)][string]$shader,
    [Parameter(Mandatory=$true)][string]$projectAssetFolder,
    [switch]$Quiet
) {
    $guid = Get-GuidFromMetaFile $shader
    $materials = (Get-ChildItem -r -include *.mat $projectAssetFolder | Where-Object { $_ | Select-String $guid })
    $count = $materials.Length
    if ($count -eq 0) {
        if (-not $Quiet) {
            Write-Host -ForegroundColor DarkYellow "$shader - Not used."
        }
        return $false
    }
    else {
        if (-not $Quiet) {
            Write-Host -ForegroundColor DarkGray "$shader - Found $count materials that use this shader."
        }
        return $true
    }
}

function Match-LightModes([string]$content)
{
    $match = $content | Select-String "(.*)""LightMode""\s*=\s*""([^""]+)"""
    if (-not $match) { return @() }
    return $match.Matches |
        Where-Object { $_.Groups[1].Value.IndexOf("//") -eq -1 } |
        ForEach-Object { $_.Groups[2] }
}

function Get-ShadersThatNeedUpdateForProject(
    [Parameter(Mandatory=$true)][string]$folder,
    [switch]$AllowUnused,
    [switch]$Quiet
) {
    $badKeywords = @(
        "ShadeSH9",
        "unity_LightPosition",
        "_LightColor0",
        "unity_LightColor",
        "unity_WorldToShadow",
        "unity_4LightAtten0",
        "_WorldSpaceLightPos0",
        "#pragma surface"
    )
    $badKeywordsRe = "(" + ($badKeywords -join "|") + ")"

    $names = @()
    try {
        if (-not $Quiet) {
            Write-Host -ForegroundColor DarkCyan "Checking folder $folder"
        }

        $shaders = Get-ChildItem -r -include *.shader,*.cginc "$folder"
        $shaders | ForEach-Object {
            $path = $_
            $content = Get-Content $path

            # if ($content -match "(UNITY_SHADOW_COORDS|TRANSFER_SHADOW|SHADOWS_SCREEN)") {
            #     if (Test-ShaderUsed -Quiet $path.FullName $folder) {
            #         $names += $path.Name
            #     }
            # }

            # if ($content -match "(UNITY_FOG_COORDS|UNITY_APPLY_FOG|UNITY_TRANSFER_FOG)") {
            #     if (Test-ShaderUsed -Quiet $path.FullName $folder) {
            #         $names += $path.Name
            #     }
            # }

            if ($content -match $badKeywordsRe -and ($AllowUnused -or (Test-ShaderUsed -Quiet:$Quiet $path.FullName $folder))) {
                $names += $path.FullName
            }

            $match = $content | Select-String ".*""LightMode""\s*=\s*""([^""]+)"""
            if ($match) {
                $match.Matches | ForEach-Object {
                    $mode = $_.Groups[1].Value
                    $newMode = switch ( $mode )
                    {
                        'Vertex' { 'UniversalForward' }
                        'ForwardBase' { 'UniversalForward' }
                        'VertexLM' { 'UniversalForward' }
                        'UniversalForward' { 'UniversalForward' }
                        'Meta' { 'Meta' }
                        default { 'error' }
                    }

                    if (($newMode -eq 'error') -or ($mode -ne $newMode)) {
                        $names += $path.FullName
                    }
                }

                $match = $content | Select-String ".*""LightMode""\s*=\s*""([^""]+)"""
                $count = ($match.Matches | Where-Object { $_.Groups[1].Value -eq "UniversalForward" }).Count
                if ($count -gt 1) {
                    $names += $path.FullName
                }
            }
        }
    }
    catch {
        $err = $_ | Out-String
        throw "Failed to update altspace shaders.`n$err"
    }
    return $names
}

function Update-ProjectShaders(
    [Parameter(Mandatory=$true)][string]$folder,
    [switch]$Delete,
    [switch]$Pretend,
    [switch]$ContinueOnError
) {
    try {
        Write-Host -ForegroundColor Green "Validating shaders for $folder."
        $shaders = Get-ChildItem -r -include *.shader,*.cginc "$folder"

        foreach ($path in $shaders) {
            $name = $path.FullName
            $content = Get-Content $path

            if ($content -match "#pragma surface") {
                if (Test-ShaderUsed $path.FullName $folder) {
                    Write-Host -ForegroundColor DarkRed "Surface shaders are not supported: $name"
                    Write-ToUpdateLog $name "Surface shaders are not supported"
                }
                elseif ($Delete) {
                    Write-Host -ForegroundColor DarkYellow "Surface shaders are not supported, but this shader isn't used. Removing: $name"
                    if (-not $Pretend) {
                        Remove-Item "$name", "$name.meta"
                    }
                }
                else {
                    Write-Host -ForegroundColor DarkYellow "Surface shaders are not supported, but this shader isn't used. It could be removed: $name"
                }
                continue;
            }

            if ($content -match "(ShadeSH9|unity_LightPosition|_LightColor0|unity_LightColor|unity_WorldToShadow|unity_4LightAtten0|_WorldSpaceLightPos0)") {
                if (Test-ShaderUsed $path.FullName $folder) {
                    Write-Host -ForegroundColor DarkRed "Shader relies on unsupported build-in lighting constructs: $name"
                    Write-ToUpdateLog $name "Shader relies on unsupported build-in lighting constructs"
                }
                elseif ($Delete) {
                    Write-Host -ForegroundColor DarkYellow "Shader relies on unsupported build-in lighting constructs, but also isn't used. Removing: $name"
                    if (-not $Pretend) {
                        Remove-Item "$name", "$name.meta"
                    }
                }
                else {
                    Write-Host -ForegroundColor DarkYellow "Shader relies on unsupported build-in lighting constructs, but also isn't used. It could be removed: $name"
                }
                continue;
            }

            Match-LightModes $content | ForEach-Object {
                $mode = $_.Groups[1].Value
                $newMode = switch ( $mode )
                {
                    'Vertex' { 'UniversalForward' }
                    'ForwardBase' { 'UniversalForward' }
                    'VertexLM' { 'UniversalForward' }
                    'UniversalForward' { 'UniversalForward' }
                    'Always' { 'UniversalForward' }
                    'Meta' { 'Meta' }
                    default { 'error' }
                }

                if ($mode -eq $newMode) {
                    Write-Host -ForegroundColor DarkGray "LightMode ($mode) already valid for: $name"
                }
                elseif ($newMode -eq 'error') {
                    Write-Host -ForegroundColor DarkRed "Unsupported shader LightMode: $mode in $name"
                    Write-ToUpdateLog $name "Unsupported shader LightMode $mode"
                    return;
                }
                else {
                    Write-Host -ForegroundColor DarkCyan "Updating LightMode from ($mode) to ($newMode): $name"
                    if (-not $Pretend) {
                        $content = $content -replace """LightMode""\s*=\s*""$mode""", """LightMode"" = ""$newMode"""
                        $content | Set-Content -Encoding ascii -Path $path
                    }
                }
            }

            $match = Match-LightModes $content 
            $count = ($match | Where-Object { $_ -eq "UniversalForward" }).Count
            if ($count -gt 1) {
                Write-Host -ForegroundColor DarkYellow "Potentially overlapping subpasses in $name"
                Write-ToUpdateLog $name "Potentially overlapping subpasses"
            }
        }

        # For future HLSL upgrades.
        # https://danielilett.com/2021-04-02-basics-3-shaders-in-urp/
        # https://cyangamedev.wordpress.com/2020/06/05/urp-shader-code/3/
        # https://teodutra.com/unity/shaders/urp/graphics/2020/05/18/From-Built-in-to-URP/
        # UnityStereoScreenSpaceUVAdjust => UnityStereoTransformScreenSpaceTex
        # UnityObjectToClipPos => TransformObjectToHClip
    }
    catch {
        if (-not $ContinueOnError) { throw }

        $err = $_ | Out-String
        Write-Error "Failed to update altspace shaders.`n$err"
        Write-ToUpdateLog $project "Failed project shaders.`n$err"
    }
}

if ($operation -eq "test") {
    Get-ShadersThatNeedUpdateForProject $searchFolder -AllowUnused -Quiet:(-not $PSCmdlet.MyInvocation.BoundParameters["Verbose"].IsPresent)
}
elseif ($operation -eq "upgrade") {
    Update-ProjectShaders $searchFolder
}

# SIG # Begin signature block
# MIIjnwYJKoZIhvcNAQcCoIIjkDCCI4wCAQExDzANBglghkgBZQMEAgEFADB5Bgor
# BgEEAYI3AgEEoGswaTA0BgorBgEEAYI3AgEeMCYCAwEAAAQQH8w7YFlLCE63JNLG
# KX7zUQIBAAIBAAIBAAIBAAIBADAxMA0GCWCGSAFlAwQCAQUABCBj6gGnOArKFx59
# w650wgNj1oy71K5U4owhDVNCGE3P1qCCDYEwggX/MIID56ADAgECAhMzAAAB32vw
# LpKnSrTQAAAAAAHfMA0GCSqGSIb3DQEBCwUAMH4xCzAJBgNVBAYTAlVTMRMwEQYD
# VQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24xKDAmBgNVBAMTH01pY3Jvc29mdCBDb2RlIFNpZ25p
# bmcgUENBIDIwMTEwHhcNMjAxMjE1MjEzMTQ1WhcNMjExMjAyMjEzMTQ1WjB0MQsw
# CQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
# ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMR4wHAYDVQQDExVNaWNy
# b3NvZnQgQ29ycG9yYXRpb24wggEiMA0GCSqGSIb3DQEBAQUAA4IBDwAwggEKAoIB
# AQC2uxlZEACjqfHkuFyoCwfL25ofI9DZWKt4wEj3JBQ48GPt1UsDv834CcoUUPMn
# s/6CtPoaQ4Thy/kbOOg/zJAnrJeiMQqRe2Lsdb/NSI2gXXX9lad1/yPUDOXo4GNw
# PjXq1JZi+HZV91bUr6ZjzePj1g+bepsqd/HC1XScj0fT3aAxLRykJSzExEBmU9eS
# yuOwUuq+CriudQtWGMdJU650v/KmzfM46Y6lo/MCnnpvz3zEL7PMdUdwqj/nYhGG
# 3UVILxX7tAdMbz7LN+6WOIpT1A41rwaoOVnv+8Ua94HwhjZmu1S73yeV7RZZNxoh
# EegJi9YYssXa7UZUUkCCA+KnAgMBAAGjggF+MIIBejAfBgNVHSUEGDAWBgorBgEE
# AYI3TAgBBggrBgEFBQcDAzAdBgNVHQ4EFgQUOPbML8IdkNGtCfMmVPtvI6VZ8+Mw
# UAYDVR0RBEkwR6RFMEMxKTAnBgNVBAsTIE1pY3Jvc29mdCBPcGVyYXRpb25zIFB1
# ZXJ0byBSaWNvMRYwFAYDVQQFEw0yMzAwMTIrNDYzMDA5MB8GA1UdIwQYMBaAFEhu
# ZOVQBdOCqhc3NyK1bajKdQKVMFQGA1UdHwRNMEswSaBHoEWGQ2h0dHA6Ly93d3cu
# bWljcm9zb2Z0LmNvbS9wa2lvcHMvY3JsL01pY0NvZFNpZ1BDQTIwMTFfMjAxMS0w
# Ny0wOC5jcmwwYQYIKwYBBQUHAQEEVTBTMFEGCCsGAQUFBzAChkVodHRwOi8vd3d3
# Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2NlcnRzL01pY0NvZFNpZ1BDQTIwMTFfMjAx
# MS0wNy0wOC5jcnQwDAYDVR0TAQH/BAIwADANBgkqhkiG9w0BAQsFAAOCAgEAnnqH
# tDyYUFaVAkvAK0eqq6nhoL95SZQu3RnpZ7tdQ89QR3++7A+4hrr7V4xxmkB5BObS
# 0YK+MALE02atjwWgPdpYQ68WdLGroJZHkbZdgERG+7tETFl3aKF4KpoSaGOskZXp
# TPnCaMo2PXoAMVMGpsQEQswimZq3IQ3nRQfBlJ0PoMMcN/+Pks8ZTL1BoPYsJpok
# t6cql59q6CypZYIwgyJ892HpttybHKg1ZtQLUlSXccRMlugPgEcNZJagPEgPYni4
# b11snjRAgf0dyQ0zI9aLXqTxWUU5pCIFiPT0b2wsxzRqCtyGqpkGM8P9GazO8eao
# mVItCYBcJSByBx/pS0cSYwBBHAZxJODUqxSXoSGDvmTfqUJXntnWkL4okok1FiCD
# Z4jpyXOQunb6egIXvkgQ7jb2uO26Ow0m8RwleDvhOMrnHsupiOPbozKroSa6paFt
# VSh89abUSooR8QdZciemmoFhcWkEwFg4spzvYNP4nIs193261WyTaRMZoceGun7G
# CT2Rl653uUj+F+g94c63AhzSq4khdL4HlFIP2ePv29smfUnHtGq6yYFDLnT0q/Y+
# Di3jwloF8EWkkHRtSuXlFUbTmwr/lDDgbpZiKhLS7CBTDj32I0L5i532+uHczw82
# oZDmYmYmIUSMbZOgS65h797rj5JJ6OkeEUJoAVwwggd6MIIFYqADAgECAgphDpDS
# AAAAAAADMA0GCSqGSIb3DQEBCwUAMIGIMQswCQYDVQQGEwJVUzETMBEGA1UECBMK
# V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0
# IENvcnBvcmF0aW9uMTIwMAYDVQQDEylNaWNyb3NvZnQgUm9vdCBDZXJ0aWZpY2F0
# ZSBBdXRob3JpdHkgMjAxMTAeFw0xMTA3MDgyMDU5MDlaFw0yNjA3MDgyMTA5MDla
# MH4xCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
# ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xKDAmBgNVBAMT
# H01pY3Jvc29mdCBDb2RlIFNpZ25pbmcgUENBIDIwMTEwggIiMA0GCSqGSIb3DQEB
# AQUAA4ICDwAwggIKAoICAQCr8PpyEBwurdhuqoIQTTS68rZYIZ9CGypr6VpQqrgG
# OBoESbp/wwwe3TdrxhLYC/A4wpkGsMg51QEUMULTiQ15ZId+lGAkbK+eSZzpaF7S
# 35tTsgosw6/ZqSuuegmv15ZZymAaBelmdugyUiYSL+erCFDPs0S3XdjELgN1q2jz
# y23zOlyhFvRGuuA4ZKxuZDV4pqBjDy3TQJP4494HDdVceaVJKecNvqATd76UPe/7
# 4ytaEB9NViiienLgEjq3SV7Y7e1DkYPZe7J7hhvZPrGMXeiJT4Qa8qEvWeSQOy2u
# M1jFtz7+MtOzAz2xsq+SOH7SnYAs9U5WkSE1JcM5bmR/U7qcD60ZI4TL9LoDho33
# X/DQUr+MlIe8wCF0JV8YKLbMJyg4JZg5SjbPfLGSrhwjp6lm7GEfauEoSZ1fiOIl
# XdMhSz5SxLVXPyQD8NF6Wy/VI+NwXQ9RRnez+ADhvKwCgl/bwBWzvRvUVUvnOaEP
# 6SNJvBi4RHxF5MHDcnrgcuck379GmcXvwhxX24ON7E1JMKerjt/sW5+v/N2wZuLB
# l4F77dbtS+dJKacTKKanfWeA5opieF+yL4TXV5xcv3coKPHtbcMojyyPQDdPweGF
# RInECUzF1KVDL3SV9274eCBYLBNdYJWaPk8zhNqwiBfenk70lrC8RqBsmNLg1oiM
# CwIDAQABo4IB7TCCAekwEAYJKwYBBAGCNxUBBAMCAQAwHQYDVR0OBBYEFEhuZOVQ
# BdOCqhc3NyK1bajKdQKVMBkGCSsGAQQBgjcUAgQMHgoAUwB1AGIAQwBBMAsGA1Ud
# DwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFHItOgIxkEO5FAVO
# 4eqnxzHRI4k0MFoGA1UdHwRTMFEwT6BNoEuGSWh0dHA6Ly9jcmwubWljcm9zb2Z0
# LmNvbS9wa2kvY3JsL3Byb2R1Y3RzL01pY1Jvb0NlckF1dDIwMTFfMjAxMV8wM18y
# Mi5jcmwwXgYIKwYBBQUHAQEEUjBQME4GCCsGAQUFBzAChkJodHRwOi8vd3d3Lm1p
# Y3Jvc29mdC5jb20vcGtpL2NlcnRzL01pY1Jvb0NlckF1dDIwMTFfMjAxMV8wM18y
# Mi5jcnQwgZ8GA1UdIASBlzCBlDCBkQYJKwYBBAGCNy4DMIGDMD8GCCsGAQUFBwIB
# FjNodHRwOi8vd3d3Lm1pY3Jvc29mdC5jb20vcGtpb3BzL2RvY3MvcHJpbWFyeWNw
# cy5odG0wQAYIKwYBBQUHAgIwNB4yIB0ATABlAGcAYQBsAF8AcABvAGwAaQBjAHkA
# XwBzAHQAYQB0AGUAbQBlAG4AdAAuIB0wDQYJKoZIhvcNAQELBQADggIBAGfyhqWY
# 4FR5Gi7T2HRnIpsLlhHhY5KZQpZ90nkMkMFlXy4sPvjDctFtg/6+P+gKyju/R6mj
# 82nbY78iNaWXXWWEkH2LRlBV2AySfNIaSxzzPEKLUtCw/WvjPgcuKZvmPRul1LUd
# d5Q54ulkyUQ9eHoj8xN9ppB0g430yyYCRirCihC7pKkFDJvtaPpoLpWgKj8qa1hJ
# Yx8JaW5amJbkg/TAj/NGK978O9C9Ne9uJa7lryft0N3zDq+ZKJeYTQ49C/IIidYf
# wzIY4vDFLc5bnrRJOQrGCsLGra7lstnbFYhRRVg4MnEnGn+x9Cf43iw6IGmYslmJ
# aG5vp7d0w0AFBqYBKig+gj8TTWYLwLNN9eGPfxxvFX1Fp3blQCplo8NdUmKGwx1j
# NpeG39rz+PIWoZon4c2ll9DuXWNB41sHnIc+BncG0QaxdR8UvmFhtfDcxhsEvt9B
# xw4o7t5lL+yX9qFcltgA1qFGvVnzl6UJS0gQmYAf0AApxbGbpT9Fdx41xtKiop96
# eiL6SJUfq/tHI4D1nvi/a7dLl+LrdXga7Oo3mXkYS//WsyNodeav+vyL6wuA6mk7
# r/ww7QRMjt/fdW1jkT3RnVZOT7+AVyKheBEyIXrvQQqxP/uozKRdwaGIm1dxVk5I
# RcBCyZt2WwqASGv9eZ/BvW1taslScxMNelDNMYIVdDCCFXACAQEwgZUwfjELMAkG
# A1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0b24xEDAOBgNVBAcTB1JlZG1vbmQx
# HjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3JhdGlvbjEoMCYGA1UEAxMfTWljcm9z
# b2Z0IENvZGUgU2lnbmluZyBQQ0EgMjAxMQITMwAAAd9r8C6Sp0q00AAAAAAB3zAN
# BglghkgBZQMEAgEFAKCBrjAZBgkqhkiG9w0BCQMxDAYKKwYBBAGCNwIBBDAcBgor
# BgEEAYI3AgELMQ4wDAYKKwYBBAGCNwIBFTAvBgkqhkiG9w0BCQQxIgQgIXEkgbYT
# G9t3g9lqmVCLy912RzJf0iUouuaHl2QdizowQgYKKwYBBAGCNwIBDDE0MDKgFIAS
# AE0AaQBjAHIAbwBzAG8AZgB0oRqAGGh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbTAN
# BgkqhkiG9w0BAQEFAASCAQBKXbkW7ytQMgIcMF5vqhfySIdkohHx7z5cHH5fVmGF
# leGhKQHuAOkp2TqpTjshK9yUCRc8ItphFaGDHJIBTOVyX3T7ouQKp0v/BlzAQlf+
# vhXtRJ9fkxCVS6syGGuE/XNAcbSZ1RySUxa6ual+guKLPF6qcDQcauaqAfW803G7
# hRX+wkTVClxFuftyA2zE6FIkV2zBQeAu7K5ETudZuGVRmnBjfMgDNDqDpTSwuHXu
# o5SxO3gSM+fMQOdWZryCN59ZUvH1ffTwo4y8yjewght+T2JOE06GEYzp0AgR5zUL
# 8h6ainRAFtB39JxfCtUJrbqQAcDa5o/ubslLBNsCv5CeoYIS/jCCEvoGCisGAQQB
# gjcDAwExghLqMIIS5gYJKoZIhvcNAQcCoIIS1zCCEtMCAQMxDzANBglghkgBZQME
# AgEFADCCAVkGCyqGSIb3DQEJEAEEoIIBSASCAUQwggFAAgEBBgorBgEEAYRZCgMB
# MDEwDQYJYIZIAWUDBAIBBQAEIFeJvsoWznHY80wbqCJ48QSuOb5N52A/XAgbVCO5
# ckU8AgZg1J/jiiEYEzIwMjEwNzAxMTcyMzIwLjk0NlowBIACAfSggdikgdUwgdIx
# CzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
# b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xLTArBgNVBAsTJE1p
# Y3Jvc29mdCBJcmVsYW5kIE9wZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMdVGhh
# bGVzIFRTUyBFU046MDg0Mi00QkU2LUMyOUExJTAjBgNVBAMTHE1pY3Jvc29mdCBU
# aW1lLVN0YW1wIFNlcnZpY2Wggg5NMIIE+TCCA+GgAwIBAgITMwAAATnM6OhDi/A0
# 4QAAAAABOTANBgkqhkiG9w0BAQsFADB8MQswCQYDVQQGEwJVUzETMBEGA1UECBMK
# V2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9zb2Z0
# IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQQ0Eg
# MjAxMDAeFw0yMDEwMTUxNzI4MjFaFw0yMjAxMTIxNzI4MjFaMIHSMQswCQYDVQQG
# EwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwG
# A1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMS0wKwYDVQQLEyRNaWNyb3NvZnQg
# SXJlbGFuZCBPcGVyYXRpb25zIExpbWl0ZWQxJjAkBgNVBAsTHVRoYWxlcyBUU1Mg
# RVNOOjA4NDItNEJFNi1DMjlBMSUwIwYDVQQDExxNaWNyb3NvZnQgVGltZS1TdGFt
# cCBTZXJ2aWNlMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEA2hP5jOMl
# kyWhjrMqBvyiePhaH5g3T39Qwdu6HqAnWcLlz9/ZKoC/QFz45gb0ad14IvqFaFm2
# J6o+vhhbf4oQJOHDTcjZXBKQTbQT/w6LCWvdCXnFQl2a8nEd42EmE7rxRVmKumbH
# oEKV+QwYdGc70q5O8M2YkqJ/StcrFhFtmhFxcvVZ+gg4azzvE87+soIzYV6zqM2K
# WO/TSy9Zeoi5X4QobV6AKuwJH08ySZ2lQBXznd8rwDzy6+BYqJXim+b+V+7E3741
# b6cQ9fmONApHLhkGqo07/B14NkGqqO978hAjXtVoQpKjKu6yxXzsspQnj0rlfsV/
# HySW/l+izx7KTwIDAQABo4IBGzCCARcwHQYDVR0OBBYEFJmem4ZyVMKZ2pKKsZ9G
# 9lAtBgzpMB8GA1UdIwQYMBaAFNVjOlyKMZDzQ3t8RhvFM2hahW1VMFYGA1UdHwRP
# ME0wS6BJoEeGRWh0dHA6Ly9jcmwubWljcm9zb2Z0LmNvbS9wa2kvY3JsL3Byb2R1
# Y3RzL01pY1RpbVN0YVBDQV8yMDEwLTA3LTAxLmNybDBaBggrBgEFBQcBAQROMEww
# SgYIKwYBBQUHMAKGPmh0dHA6Ly93d3cubWljcm9zb2Z0LmNvbS9wa2kvY2VydHMv
# TWljVGltU3RhUENBXzIwMTAtMDctMDEuY3J0MAwGA1UdEwEB/wQCMAAwEwYDVR0l
# BAwwCgYIKwYBBQUHAwgwDQYJKoZIhvcNAQELBQADggEBAFhcKGrz/zcahc3BWu1D
# goi/EA2xJvu69hGIk6FtIPHXWMiuVmtRQHf8pyQ9asnP2ccfRz/dMqlyk/q8+INc
# CLEElpSgm91xuCFYbFhAhLJtoozf38aH5rY2ZxWN9buDEknJfiGiK6Q+8kkCNWmb
# Wj2DxRwEF8IfBwjF7EPhYDgdilKz486uwhgosor1GuDWilYjGoMNq3lrwDIkY/83
# KUpJhorlpiBdkINEsVkCfzyELme9C3tamZtMSXxrUZwX6Wrf3dSYEAqy36PJZJri
# wTwhvzjIeqD8eKzUUh3ufE2/EjEAbabBhCo2+tUoynT6TAJtjdiva4g7P73/VQrS
# cMcwggZxMIIEWaADAgECAgphCYEqAAAAAAACMA0GCSqGSIb3DQEBCwUAMIGIMQsw
# CQYDVQQGEwJVUzETMBEGA1UECBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9u
# ZDEeMBwGA1UEChMVTWljcm9zb2Z0IENvcnBvcmF0aW9uMTIwMAYDVQQDEylNaWNy
# b3NvZnQgUm9vdCBDZXJ0aWZpY2F0ZSBBdXRob3JpdHkgMjAxMDAeFw0xMDA3MDEy
# MTM2NTVaFw0yNTA3MDEyMTQ2NTVaMHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpX
# YXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQg
# Q29ycG9yYXRpb24xJjAkBgNVBAMTHU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAy
# MDEwMIIBIjANBgkqhkiG9w0BAQEFAAOCAQ8AMIIBCgKCAQEAqR0NvHcRijog7PwT
# l/X6f2mUa3RUENWlCgCChfvtfGhLLF/Fw+Vhwna3PmYrW/AVUycEMR9BGxqVHc4J
# E458YTBZsTBED/FgiIRUQwzXTbg4CLNC3ZOs1nMwVyaCo0UN0Or1R4HNvyRgMlhg
# RvJYR4YyhB50YWeRX4FUsc+TTJLBxKZd0WETbijGGvmGgLvfYfxGwScdJGcSchoh
# iq9LZIlQYrFd/XcfPfBXday9ikJNQFHRD5wGPmd/9WbAA5ZEfu/QS/1u5ZrKsajy
# eioKMfDaTgaRtogINeh4HLDpmc085y9Euqf03GS9pAHBIAmTeM38vMDJRF1eFpwB
# BU8iTQIDAQABo4IB5jCCAeIwEAYJKwYBBAGCNxUBBAMCAQAwHQYDVR0OBBYEFNVj
# OlyKMZDzQ3t8RhvFM2hahW1VMBkGCSsGAQQBgjcUAgQMHgoAUwB1AGIAQwBBMAsG
# A1UdDwQEAwIBhjAPBgNVHRMBAf8EBTADAQH/MB8GA1UdIwQYMBaAFNX2VsuP6KJc
# YmjRPZSQW9fOmhjEMFYGA1UdHwRPME0wS6BJoEeGRWh0dHA6Ly9jcmwubWljcm9z
# b2Z0LmNvbS9wa2kvY3JsL3Byb2R1Y3RzL01pY1Jvb0NlckF1dF8yMDEwLTA2LTIz
# LmNybDBaBggrBgEFBQcBAQROMEwwSgYIKwYBBQUHMAKGPmh0dHA6Ly93d3cubWlj
# cm9zb2Z0LmNvbS9wa2kvY2VydHMvTWljUm9vQ2VyQXV0XzIwMTAtMDYtMjMuY3J0
# MIGgBgNVHSABAf8EgZUwgZIwgY8GCSsGAQQBgjcuAzCBgTA9BggrBgEFBQcCARYx
# aHR0cDovL3d3dy5taWNyb3NvZnQuY29tL1BLSS9kb2NzL0NQUy9kZWZhdWx0Lmh0
# bTBABggrBgEFBQcCAjA0HjIgHQBMAGUAZwBhAGwAXwBQAG8AbABpAGMAeQBfAFMA
# dABhAHQAZQBtAGUAbgB0AC4gHTANBgkqhkiG9w0BAQsFAAOCAgEAB+aIUQ3ixuCY
# P4FxAz2do6Ehb7Prpsz1Mb7PBeKp/vpXbRkws8LFZslq3/Xn8Hi9x6ieJeP5vO1r
# VFcIK1GCRBL7uVOMzPRgEop2zEBAQZvcXBf/XPleFzWYJFZLdO9CEMivv3/Gf/I3
# fVo/HPKZeUqRUgCvOA8X9S95gWXZqbVr5MfO9sp6AG9LMEQkIjzP7QOllo9ZKby2
# /QThcJ8ySif9Va8v/rbljjO7Yl+a21dA6fHOmWaQjP9qYn/dxUoLkSbiOewZSnFj
# nXshbcOco6I8+n99lmqQeKZt0uGc+R38ONiU9MalCpaGpL2eGq4EQoO4tYCbIjgg
# tSXlZOz39L9+Y1klD3ouOVd2onGqBooPiRa6YacRy5rYDkeagMXQzafQ732D8OE7
# cQnfXXSYIghh2rBQHm+98eEA3+cxB6STOvdlR3jo+KhIq/fecn5ha293qYHLpwms
# ObvsxsvYgrRyzR30uIUBHoD7G4kqVDmyW9rIDVWZeodzOwjmmC3qjeAzLhIp9cAv
# VCch98isTtoouLGp25ayp0Kiyc8ZQU3ghvkqmqMRZjDTu3QyS99je/WZii8bxyGv
# WbWu3EQ8l1Bx16HSxVXjad5XwdHeMMD9zOZN+w2/XU/pnR4ZOC+8z1gFLu8NoFA1
# 2u8JJxzVs341Hgi62jbb01+P3nSISRKhggLXMIICQAIBATCCAQChgdikgdUwgdIx
# CzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdSZWRt
# b25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xLTArBgNVBAsTJE1p
# Y3Jvc29mdCBJcmVsYW5kIE9wZXJhdGlvbnMgTGltaXRlZDEmMCQGA1UECxMdVGhh
# bGVzIFRTUyBFU046MDg0Mi00QkU2LUMyOUExJTAjBgNVBAMTHE1pY3Jvc29mdCBU
# aW1lLVN0YW1wIFNlcnZpY2WiIwoBATAHBgUrDgMCGgMVAA1NlP4b3paEjXQ/He5K
# BMazZYwHoIGDMIGApH4wfDELMAkGA1UEBhMCVVMxEzARBgNVBAgTCldhc2hpbmd0
# b24xEDAOBgNVBAcTB1JlZG1vbmQxHjAcBgNVBAoTFU1pY3Jvc29mdCBDb3Jwb3Jh
# dGlvbjEmMCQGA1UEAxMdTWljcm9zb2Z0IFRpbWUtU3RhbXAgUENBIDIwMTAwDQYJ
# KoZIhvcNAQEFBQACBQDkiFiVMCIYDzIwMjEwNzAxMjMwNzAxWhgPMjAyMTA3MDIy
# MzA3MDFaMHcwPQYKKwYBBAGEWQoEATEvMC0wCgIFAOSIWJUCAQAwCgIBAAICIGgC
# Af8wBwIBAAICEL4wCgIFAOSJqhUCAQAwNgYKKwYBBAGEWQoEAjEoMCYwDAYKKwYB
# BAGEWQoDAqAKMAgCAQACAwehIKEKMAgCAQACAwGGoDANBgkqhkiG9w0BAQUFAAOB
# gQA6f4x1Hulq/SaF/7Gr5RphEWVC7KA10/HLvnqgocyCtmu6phzebtaids6gqdsq
# YmqRhmAeubs7DjfvcTpqIkXl5aKuL92ndIqsAFtoyC70LAeArX6SzK2L39KQ9e3Z
# BjcnemKDGkh0fc3NdFeqQ/QimpPGeoOoeoW9jqDE13sTyzGCAw0wggMJAgEBMIGT
# MHwxCzAJBgNVBAYTAlVTMRMwEQYDVQQIEwpXYXNoaW5ndG9uMRAwDgYDVQQHEwdS
# ZWRtb25kMR4wHAYDVQQKExVNaWNyb3NvZnQgQ29ycG9yYXRpb24xJjAkBgNVBAMT
# HU1pY3Jvc29mdCBUaW1lLVN0YW1wIFBDQSAyMDEwAhMzAAABOczo6EOL8DThAAAA
# AAE5MA0GCWCGSAFlAwQCAQUAoIIBSjAaBgkqhkiG9w0BCQMxDQYLKoZIhvcNAQkQ
# AQQwLwYJKoZIhvcNAQkEMSIEIKXxeG8kMDt+WmXWMmumLvT7iadP0sxZGi104i05
# MaHVMIH6BgsqhkiG9w0BCRACLzGB6jCB5zCB5DCBvQQgPKGO5Dij1yR7MUKx4oEF
# rnxqVSfzmnqfJqbUoAcP/J8wgZgwgYCkfjB8MQswCQYDVQQGEwJVUzETMBEGA1UE
# CBMKV2FzaGluZ3RvbjEQMA4GA1UEBxMHUmVkbW9uZDEeMBwGA1UEChMVTWljcm9z
# b2Z0IENvcnBvcmF0aW9uMSYwJAYDVQQDEx1NaWNyb3NvZnQgVGltZS1TdGFtcCBQ
# Q0EgMjAxMAITMwAAATnM6OhDi/A04QAAAAABOTAiBCBDKlaewP3790RmAJTWe8+w
# X9VHS1M/CkoMWfpTZzdbGDANBgkqhkiG9w0BAQsFAASCAQB6zllCwRy5VcCfVmNx
# C3weqFSNgtNHUsgNRKxt5sFhyrTWEMHYChzcikh6qeukQAI4AZZdRMkNVeeYylFB
# 9mOsD3mBEGm1Rb5KvLTBR7RJNWLwNlRTaoG+hmP0uNcRL/LUMnnVNjxIhdw+mSjQ
# tFveyiHDNU/9dowoSLc2H8JLJuqo6odQ6OD0+1+1/HHQXngb8qHAqfQzBiCsdP7t
# j/YkX3PyY9qtmwc52C83hleUoAtCLzDSZVsQOxx57xsDjcjZ1eDJ92v3XtZKgjRG
# oQOloYodCV6CWLVnavO7q/dGfBr5X4HOCOMIH2A8Ub4WHDJPjrc6WmHRSY+fBeHR
# ZANl
# SIG # End signature block
