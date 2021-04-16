using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using TMPro;
using System;

public class BrockDistance : MonoBehaviour
{
    public GameObject camera;
    public TextMeshPro Distancetext;
    

    private float cameraTransformX;
    private float cameraTransformZ;
    // Start is called before the first frame update
    void Start()
    {
        Dictionary<string, double> WaypointLongitude = new Dictionary<string, double>();
        Dictionary<string, double> WaypointLatitude = new Dictionary<string, double>();
        Distancetext.text = "Distance" ;
       



        //WaypointLongitude.Add("Vallis Alpes", 3.63);
        //WaypointLatitude.Add("Vallis Alpes", 49.21);
        //WaypointLongitude.Add("Vallis Baade", -76.2);
        //WaypointLatitude.Add("Vallis Baade", -45.9);
        //WaypointLongitude.Add("Vallis Bohr", -86.6);
        //WaypointLatitude.Add("Vallis Bohr", 12.4);
        //WaypointLongitude.Add("Vallis Bouvard", -83.1);
        //WaypointLatitude.Add("Vallis Bouvard", -38.3);
        //WaypointLongitude.Add("Vallis Capella", 34.9);
        //WaypointLatitude.Add("Vallis Capella", -7.6);
        //WaypointLongitude.Add("Vallis Inghriami", -72.2);
        //WaypointLatitude.Add("Vallis Inghriami", -43.8);
        //WaypointLongitude.Add("Vallis Palitzsch", 64.3);
        //WaypointLatitude.Add("Vallis Palitzsch", -26.4);
        //WaypointLongitude.Add("Vallis Planck", 126.1);
        //WaypointLatitude.Add("Vallis Planck", -58.4);
        //WaypointLongitude.Add("Vallis Rheita", 51.5);
        //WaypointLatitude.Add("Vallis Rheita", -42.5);
        //WaypointLongitude.Add("Vallis Schrodinger", 105);
        //WaypointLatitude.Add("Vallis Schrodinger", -67);
        //WaypointLongitude.Add("Vallis Schroteri", -50.8);
        //WaypointLatitude.Add("Vallis Schroteri", 26.2);
        //WaypointLongitude.Add("Vallis Snellius", 56);
        //WaypointLatitude.Add("Vallis Snellius", -31.1);
        
        //WaypointLongitude.Add("Mare Anguis", 67.7);
        //WaypointLatitude.Add("Mare Anguis", 22.6);
        //WaypointLongitude.Add("Mare Australe", 93);
        //WaypointLatitude.Add("Mare Australe", 38.9);
        //WaypointLongitude.Add("Mare Cognitum", -23.3);
        //WaypointLatitude.Add("Mare Cognitum", -10.5);
        //WaypointLongitude.Add("Mare Crisium", 59.1);
        //WaypointLatitude.Add("Mare Crisium", 17);
        //WaypointLongitude.Add("Mare Fecunditatis", 51.3);
        //WaypointLatitude.Add("Mare Fecunditatis", -7.8);
        //WaypointLongitude.Add("Mare Frigoris", 1.4);
        //WaypointLatitude.Add("Mare Frigoris", 56);
        //WaypointLongitude.Add("Mare Humboldtianum", 81.5);
        //WaypointLatitude.Add("Mare Humboldtianum", 56.9);
        //WaypointLongitude.Add("Mare Humorum", -38.6);
        //WaypointLatitude.Add("Mare Humorum", -24.4);
        //WaypointLongitude.Add("Mare Imbrium", -15.6);
        //WaypointLatitude.Add("Mare Imbrium", 32.8);
        //WaypointLongitude.Add("Mare Ingenii", 163.5);
        //WaypointLatitude.Add("Mare Ingenii", -33.7);
        //WaypointLongitude.Add("Mare Insularum", -30.9);
        //WaypointLatitude.Add("Mare Insularum", 7.5);
        //WaypointLongitude.Add("Mare Marginis", 86.1);
        //WaypointLatitude.Add("Mare Marginis", 13.3);
        //WaypointLongitude.Add("Mare Moscoviense", 147.9);
        //WaypointLatitude.Add("mare Moscoviense", 27.3);
        //WaypointLongitude.Add("Mare Nectaris", 34.6);
        //WaypointLatitude.Add("Mare Nectaris", -15.2);
        //WaypointLongitude.Add("Mare Nubium", -16.6);
        //WaypointLatitude.Add("Mare Nubium", -21.3);
        //WaypointLongitude.Add("Mare Orientale", -92.8);
        //WaypointLatitude.Add("Mare Orientale", -19.4);
        //WaypointLongitude.Add("Mare Serenitatis", 17.5);
        //WaypointLatitude.Add("Mare Serenitatis", 28); 
        //WaypointLongitude.Add("Mare Smythii", 87.5);
        //WaypointLatitude.Add("Mare Smythii", 1.3);
        //WaypointLongitude.Add("Mare Spumans", 65.3);
        //WaypointLatitude.Add("Mare Spumans", 1.3);
        //WaypointLongitude.Add("Mare Tranquillitatis", 31.4);
        //WaypointLatitude.Add("Mare Tranquillitatis", 8.5);
        //WaypointLongitude.Add("Mare Undarum", 68.4);
        //WaypointLatitude.Add("Mare Undarum", 6.8);
        //WaypointLongitude.Add("Mare Vaporum", 3.6);
        //WaypointLatitude.Add("Mare Vaporum", 13.3);

        //WaypointLongitude.Add("Oceanus Procellarum", -57.4);
        //WaypointLatitude.Add("Oceanus Procellarum", 18.4);

        //WaypointLongitude.Add("Lacus Aestatis", -69);
        //WaypointLatitude.Add("Lacus Aestatis", -15);
        //WaypointLongitude.Add("Lacus Autumni", -83.9);
        //WaypointLatitude.Add("Lacus Autumni", -9.9);
        //WaypointLongitude.Add("Lacus Bonitatis", 44.3);
        //WaypointLatitude.Add("Lacus Bonitatis", 23.2);
        //WaypointLongitude.Add("Lacus Doloris", 8.6);
        //WaypointLatitude.Add("Lacus Doloris", 16.8);
        //WaypointLongitude.Add("Lacus Excellentiae", -44);
        //WaypointLatitude.Add("Lacus Excellentiae", -35.4);
        //WaypointLongitude.Add("Lacus Felicitatis", 5.4);
        //WaypointLatitude.Add("Lacus Felicitatis", 18.5);
        //WaypointLongitude.Add("Lacus Gaudii", 12.3);
        //WaypointLatitude.Add("Lacus Gaudii", 16.3);
        //WaypointLongitude.Add("Lacus Hiemalis", 14);
        //WaypointLatitude.Add("Lacus Hiemalis", 15);
        //WaypointLongitude.Add("Lacus Lenitatis", 12.1);
        //WaypointLatitude.Add("Lacus Lenitatis", 14.3);
        //WaypointLongitude.Add("Lacus Luxuriae", 176);
        //WaypointLatitude.Add("Lacus Luxuriae", 19);
        //WaypointLongitude.Add("Lacus Mortis", 27.2);
        //WaypointLatitude.Add("Lacus Mortis", 45);
        //WaypointLongitude.Add("Lacus Oblivionis", -168);
        //WaypointLatitude.Add("Lacus Oblivionis", -21);
        //WaypointLongitude.Add("Lacus Odii", 7);
        //WaypointLatitude.Add("Lacus Odii", 19);
        //WaypointLongitude.Add("Lacus Perseverantiae", 62);
        //WaypointLatitude.Add("Lacus Perseverantiae", 8);
        //WaypointLongitude.Add("Lacus Solitudinis", 104.3);
        //WaypointLatitude.Add("Lacus Solitudinis", -27.8);
        //WaypointLongitude.Add("Lacus Somniorum", 29.2);
        //WaypointLatitude.Add("Lacus Somniorum", 38);
        //WaypointLongitude.Add("Lacus Spei", 65);
        //WaypointLatitude.Add("Lacus Spei", 43);
        //WaypointLongitude.Add("Lacus Temporis", 58.4);
        //WaypointLatitude.Add("Lacus Temporis", 45.9);
        //WaypointLongitude.Add("Lacus Timoris", -27.9);
        //WaypointLatitude.Add("Lacus Timoris", -39.4);
        //WaypointLongitude.Add("Lacus Veris", -86.1);
        //WaypointLatitude.Add("Lacus Veris", 16.5);

        //WaypointLongitude.Add("Palus Epidemiarum", -28.2);
        //WaypointLatitude.Add("Palus Epidemiarum", -32);
        //WaypointLongitude.Add("Palus Putredinis", 0.4);
        //WaypointLatitude.Add("Palus Putredinis", 27.4);
        //WaypointLongitude.Add("Palus Somni", 45);
        //WaypointLatitude.Add("Palus Somni", 14.1);

        //WaypointLongitude.Add("Sinus Aestuum", -8.3);
        //WaypointLatitude.Add("Sinus Aestuum", 12.1);
        //WaypointLongitude.Add("Sinus Amoris", 37.3);
        //WaypointLatitude.Add("Sinus Amoris", 19.9);
        //WaypointLongitude.Add("Sinus Asperitatis", 27.4);
        //WaypointLatitude.Add("Sinus Asperitatis", -3.8);
        //WaypointLongitude.Add("Sinus Concordiae", 43.2);
        //WaypointLatitude.Add("Sinus Concordiae", 10.8);
        //WaypointLongitude.Add("Sinus Fidei", 2.0);
        //WaypointLatitude.Add("Sinus Fidei", 18.0);
        //WaypointLongitude.Add("Sinus Honoris", 17.9);
        //WaypointLatitude.Add("Sinus Honoris", 11.7);
        //WaypointLongitude.Add("Sinus Iridum", -31.67);
        //WaypointLatitude.Add("Sinus Iridum", 45.01);
        //WaypointLongitude.Add("Sinus Lunicus", -1.9);
        //WaypointLatitude.Add("Sinus Lunicus", 32.4);
        //WaypointLongitude.Add("Sinus Medii", 1.0);
        //WaypointLatitude.Add("Sinus Medii", 1.6);
        //WaypointLongitude.Add("Sinus Roris", -56.6);
        //WaypointLatitude.Add("Sinus Roris", 54);
        //WaypointLongitude.Add("Sinus Successus", 59);
        //WaypointLatitude.Add("Sinus Successus", 0.9);

        //WaypointLongitude.Add("Mons Agnes", 5.34);
        //WaypointLatitude.Add("Mons Agnes", 18.66);
        //WaypointLongitude.Add("Mons Ampere", -3.7);
        //WaypointLatitude.Add("Mons Ampere", 18.9);
        //WaypointLongitude.Add("Mons Andre", 120.56);
        //WaypointLatitude.Add("Mons Andre", 5.18);
        //WaypointLongitude.Add("Mons Ardeshir", 121.04);
        //WaypointLatitude.Add("Mons Ardeshir", 5.03);

        //WaypointLongitude.Add("Little West", 23.462);
        //WaypointLatitude.Add("Little West", 0.682);
        //WaypointLongitude.Add("North Ray", -8.832);
        //WaypointLatitude.Add("North Ray", 15.455);

        //WaypointLongitude.Add("Apollo 11", 23.473);
        //WaypointLatitude.Add("Apollo 11", 0.674);
        //WaypointLongitude.Add("Apollo 12", -23.42);
        //WaypointLatitude.Add("Apollo 12", -3.012);
        //WaypointLongitude.Add("Apollo 14", -17.47);
        //WaypointLatitude.Add("Apollo 14", -3.65);
        //WaypointLongitude.Add("Apollo 15", 3.63);
        //WaypointLatitude.Add("Apollo 15", 26.13);
        //WaypointLongitude.Add("Apollo 16", 15.5);
        //WaypointLatitude.Add("Apollo 16", -8.97);
        //WaypointLongitude.Add("Apollo 17", 30.77);
        //WaypointLatitude.Add("Apollo 17", 20.19);

        // Waypoints for SUITS 2021
        //Starts at Lander/UIA
        WaypointLongitude.Add("Lander", 29.5586574);
        WaypointLatitude.Add("Lander", -95.0920556);
        //Then towards geology site for sampling
        WaypointLongitude.Add("Geology_Site", 29.5586044);
        WaypointLatitude.Add("Geology_Site", -95.0919444);
        //Then towards rover for rock sample retrieval
        WaypointLongitude.Add("Rover", 29.5594941);
        WaypointLatitude.Add("Rover", -95.0932222);
        //Finally goes back to lander/UIA
        

        // Need to get input from user for waypoints that will be hit in EVA
        // Then take waypoints from dictionaries and compute distance
        // Then print distance and angle so compass will point to correct location
        // Then have ability to click "Next" and check to verify coordinates so next waypoint will activate
    }

    // Update is called once per frame
    void Update()
    {
        cameraTransformX = camera.transform.position.x;
        cameraTransformZ = camera.transform.position.z;
        // Convert Unity Cords to GPS then use as lat/long 1
        // Then print as text mesh pro
        // Pull data from dropdown and determine what waypoint is needed



        // Distance Calculator - ROUNDING ERRORS
        /*
        var Rmoon = 1738.1f; // Radius of Moon: distance in kilometers [km]
        var Rearth = 6378.1f; // distance in kilometers [km]
        */
        //var Rmoon = 1738.1f; // Radius of Moon: distance in kilometers [km]
        var Rearth = 6371e3f; // distance in [m]


        //_________________________________________________
        var LanderLat1D = -95.0920556f; //waypoint 1
        var LanderLong1D = 29.5586574f;

        var GeoLat2D = -95.0919444f; //Waypoint 2
        var GeoLong2D = 29.5586044f;

        var RoverLat3D = -95.0932222f; // Waypoint 3
        var RoverLong3D = 29.5594941f;

        // ______________________________________________Waypoint 1 to Waypoint 2________________________________________
        // Convert to radians ...1D to ...1
        // If lat1 is the starting point then we will make this for the lander
        var lat1 = LanderLat1D * (Mathf.PI/180); //lat1, delta lat in radians
        var lat2 = GeoLat2D * (Mathf.PI/180);
        var long1 = LanderLong1D * (Mathf.PI / 180);
        var long2 = GeoLong2D * (Mathf.PI / 180);
        var deltalat = (GeoLat2D - LanderLat1D) * (Mathf.PI/180);
        var deltalong = (GeoLong2D - LanderLong1D) * (Mathf.PI/180);

        // ______________________________________________Waypoint 2 to Waypoint 3________________________________________
        var lat3 = RoverLat3D * (Mathf.PI / 180);
        var long3 = RoverLong3D * (Mathf.PI / 180);
        var deltalat2 = (RoverLat3D - GeoLat2D) * (Mathf.PI / 180);
        var deltalong2 = (RoverLong3D - GeoLong2D) * (Mathf.PI / 180);

        // ______________________________________________Waypoint 3 to Waypoint 1________________________________________
        var deltalat3 = (RoverLat3D - LanderLat1D) * (Mathf.PI / 180);
        var deltalong3 = (RoverLong3D - LanderLong1D) * (Mathf.PI / 180);

        // Distance 1
        // a = distance [meters] of latitude 1 to 2
        var a = (Mathf.Sin(deltalat / 2) * Mathf.Sin(deltalat / 2)) + (Mathf.Cos(lat1) * Mathf.Cos(lat2) * Mathf.Sin(deltalong / 2) * Mathf.Sin(deltalong / 2));
        // uses a calculation
        var c = 2 * Mathf.Atan2(Mathf.Sqrt(a), Mathf.Sqrt(1 - a));
        // d = distance : Rearth = radius of earth
        var d = Rearth * c; // total distance of the 2 points
        var ti = (d / 2.2); // average walking speed, 2.2 [m/s]    //time needs to be a double format

        //TimeSpan time = TimeSpan.FromSeconds(ti);
        //string times_1 = time.ToString(@"hh\\:mm\\:ss\\.fff");
        string times_1 = ti.ToString();
        string dis = d.ToString();


        // Distance 2
        // a = distance [meters] of latitude 2 to 3

        var a_2 = (Mathf.Sin(deltalat2 / 2) * Mathf.Sin(deltalat2 / 2)) + (Mathf.Cos(lat2) * Mathf.Cos(lat3) * Mathf.Sin(deltalong2 / 2) * Mathf.Sin(deltalong2 / 2));
        // uses a calculation in c
        var c_2 = 2 * Mathf.Atan2(Mathf.Sqrt(a_2), Mathf.Sqrt(1 - a_2));
        // d = distance : Rearth = radius of earth
        var d_2 = Rearth * c_2; // total distance of the 2 points
        var ti_2 = ((d_2 / 2.2)); // average walking speed, 2.2 [m/s]

        //TimeSpan time_2 = TimeSpan.FromSeconds(ti_2);
        //string times_2 = time_2.ToString(@"hh\\:mm\\:ss\\.fff");
        string times_2 = ti_2.ToString();
        string dis_2 = d_2.ToString();


        //Distance 3
        // a = distance [meters] of latitude 3 to 1 (or 1 to 3)

        var a_3 = (Mathf.Sin(deltalat3 / 2) * Mathf.Sin(deltalat3 / 2)) + (Mathf.Cos(lat3) * Mathf.Cos(lat1) * Mathf.Sin(deltalong3 / 2) * Mathf.Sin(deltalong3 / 2));
        // uses a calculation
        var c_3 = 2 * Mathf.Atan2(Mathf.Sqrt(a_3), Mathf.Sqrt(1 - a_3));
        // d = distance : Rearth = radius of earth
        var d_3 = Rearth * c_3; // total distance of the 2 points
        var ti_3 = ((d_3/ 2.2)); // average walking speed, 2.2 [m/s]

        //TimeSpan time_3 = TimeSpan.FromSeconds(ti_3);
        //string times_3 = time.ToString(@"hh\\:mm\\:ss\\.fff");
        string times_3 = ti_3.ToString();
        string dis_3 = d_3.ToString();


        // Bearing Calculator
        // Bearing doesnt work
        var Direction = Mathf.Atan2(Mathf.Sin(deltalong) * Mathf.Cos(lat2), (Mathf.Cos(lat1) * Mathf.Sin(lat2)) - (Mathf.Sin(lat1) * Mathf.Cos(lat2) * Mathf.Cos(deltalong)));
        // PRINT Direction to whatever determines angle for the compass
        print(d);
        if (d < 2) // less than 2 [m]
        {
            Distancetext.color = Color.white;
            Distancetext.text = "Waypoint 1: " + dis + " m\n" + "ETA: " + times_1 + "\nWaypoint 2: " + dis_2 + " m\n" + "ETA: " + times_2 + "\nWaypoint 3: " + dis_3 + " m\n" + "ETA: " + times_3;

        }
        else if (2 < d && d < 10) // greater than 2 m or less than 10 m
        {
            Distancetext.color = Color.yellow;
            Distancetext.text = "Waypoint 1: " + dis + " m\n" + "ETA: " + times_1 + "\nWaypoint 2: " + dis_2 + " m\n" + "ETA: " + times_2 + "\nWaypoint 3: " + dis_3 + " m\n" + "ETA: " + times_3;

        }

        else if (10 < d && d < 12)
        {
            Distancetext.color = Color.blue;
            Distancetext.text = "Waypoint 1: " + dis + " m\n" + "ETA: " + times_1 + "\nWaypoint 2: " + dis_2 + " m\n" + "ETA: " + times_2 + "\nWaypoint 3: " + dis_3 + " m\n" + "ETA: " + times_3;

        }
        else if (12 < d && d < 100)
        {
            Distancetext.color = Color.green;
            Distancetext.text = "Waypoint 1: " + dis + " m\n" + "ETA: " + times_1 + "\nWaypoint 2: " + dis_2 + " m\n" + "ETA: " + times_2 + "\nWaypoint 3: " + dis_3 + " m\n" + "ETA: " + times_3;

            //Distancetext.text = "Distance to Waypoint " + dis + "/nTime to Destinantion " + time;
        }
        else if (d > 100)
        {
            Distancetext.color = Color.magenta; //pink
            Distancetext.text = "Waypoint 1: " + dis + " m\n" + "ETA: " + times_1 + "\nWaypoint 2: " + dis_2 + " m\n" + "ETA: " + times_2 + "\nWaypoint 3: " + dis_3 + " m\n" + "ETA: " + times_3;

            //Distancetext.text = "Distance to Waypoint " + dis + "/nTime to Destinantion " + time;
        }
    }
}