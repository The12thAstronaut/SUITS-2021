# TAMU NASA SUITS

The 12th Astronaut Github Repository

![Alt text](/Pictures/holoWrist.PNG?raw=true "UI Concept")

The objective of the SUITS competition is to develop a user interface, utilizing the Microsoft HoloLens for augmented reality (AR), that would enable astronauts to finish a task more efficiently by providing a set of instructions via the display environment. The team has until April to develop a system, and then present their prototypes to a group of testers at Johnson Space Center in Houston.

Typically, astronauts follow written procedures when performing tasks on a mission, even those that have been done frequently, to ensure that every step is executed correctly, and nothing is missed. For complex tasks during an extra-vehicular activity (EVA)/spacewalk, the crew can’t carry laptops, paper or anything physical to follow detailed written procedures on their own. They rely solely on voice guidance from mission control or an intravehicular (IVA) crewmember.

Using a helmet-based interactive display, guiding information can be projected on the astronaut’s helmet visor within his or her field of view, freeing up dependence on voice-guided commands. Since the student teams don’t have direct access to the actual space environment for research and development, virtual reality will be used to emulate space conditions and test the AR algorithms in a simulation.

Find out more about the challenge at:
https://microgravityuniversity.jsc.nasa.gov/nasasuits.cfm

![Alt text](/Pictures/SUITS-2021.png?raw=true "SUITS 2021 Overview")

![Alt text](/Pictures/NASA_SUITS_Logov4.png?raw=true "12th Astronaut Logo")

For updating the Hololens 2, please do the following:
1. Make sure the Hololens 2 is on, and navigate to the "Network and Internet"
2. Assuming you are connected to the Wifi, note down the IP Address.
3. Download the folder from the "Master" branch on Github, and unzip it if needed.
4. Open the .sln file with Visual Studios
5. Make sure the solution configuration is set to "Release", "ARM", and "Remote Machine".
6. In the Solution Explorer, right click and go to Properties
7. Under Configuration Properties, click "Debugging" and make sure "Remote Machine" is set as Debugger To Launch
8. Next to "Machine Name", write down the IP Address and click "Apply"
9. Exit out of that window
10. Make sure the Hololens 2 is on
11. Navigate to "Debug" and select Start Without Debugging OR press Ctrl+F5
12. Give it time, and the new code will upload to the Hololens 2
13. Done!


