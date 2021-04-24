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


Before anything, make sure the Hololens 2 is connected to the wifi, and under "Settings -> Network & Internet -> Hardware Properties -> IPv4 address", find the IP address and take note of it.

To upload our project onto the Hololens 2, please follow the following steps:
1. Make sure you un-zip the files downloaded from Github. Make sure to keep all the files together.
2. Once that is done, open that solutions file (.sln) called "SUITS-2021.sln".
3. Make sure the "Release" , "ARM", and "Remote Machine" configurations are respectivily set.
4. In the Solution Explorer, right click "SUITS-2021 (Universal Windows)" and head to "Properties".
5. Go to the "Debugging" property, and type in the IP address in the "Machine Name" section.
6. Click "Apply", and exit out of the Property Pages
7. With the Hololens 2 on, Start without Debugging by either pressing "Ctrl+F5" or by going to "Debug -> Start without Debugging"
8. After some time, the program should start in the Hololens 2.
9. Done!



"Thank and Gig'Em!" -12th Astronaut Team

