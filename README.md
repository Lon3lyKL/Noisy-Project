# Noisy-Project
This is a project by SSTudents for SSTudent to tell them to keep quiet during O Level Practical ;-;

Resources:
Check Resouces file

DATA:
- https://docs.google.com/spreadsheets/d/1UvS9qfeL-FOSvyElGNO4R17XsOqtYgqw1WRZXdFCIbs/edit#gid=698862983 
- cleaned up and formated with graph

27/1/23: Things to do
"use 741" -ms teo for speech pricessing
Kar Lok:
-   add a dc voltage regulator that can supply >3A current
    - we can use this 5v5A one https://www.amazon.sg/Pololu-Step-Down-Voltage-Regulator-D24V50F5/dp/B01M659ER2 
-   make the Rtc + SD card work
    - sd card formatting should be [dd/mm/yy_hh.mm.ss_data]
-  change the mega to a mini(save space) / mega
-  redesigning the lights
    - mounting of the leds
    - diffuser
    - distance to diffuser
-  add a fan into the control box to provide cooling to the components cos it gna run for 24/7

Jay:
-   try to do mic v2 and make it work with a condensor mic


3/2/23: Update
- we integrated the sd card and rtc
- we set up the recording structure into the sd card
- we set up the rtc to the exact time
- we found a few osciliscopes dead
- we found a few broken osciliscope probe
- we made the amplifier circuit to work
    - the mic we used is the wrong one
            - the pickup pattern is completely wrong
    - we used the lm741 ic to amplify it

what we need to do: 
- get a better mic
- go back on wed to collect the data
- pcb hehehawhaw



8/2/23: Update
- the data on monday was ok with us being able to see the points where students came down for thier breaks and there was noise recorded
- the tuesday data was weird it got all flipped and we have no clue what happened
- first time collecting the data it was good
- the sd card and the rtc works
- the google sheet was created with the correct formuls to create the graph to visualise the data



22/2/23: Update
- we got the data from 8-10 feb and it was ok, sensitivity of the mic has to be changed
    - at soome poitns the mic recoded 22 whcih was loud(we still have no clue what happened)
- changed the sampling rate to every 30 seconds form every 10 seconds
- changed the parameters for when the light will trigger for the dfferent volumes
    - 900> == quiet
    - 600> <900 == modertely noisy
    - <600 == very noisy
- tested it with some of us talking and got it to moderate noise
- realised the rtc was configured to be one day ahead(small problem, the date wont be used)
- planning to leave it until 24 feb(fri) even overnicet to collect the data
- fine tuning the number to be able to record a video of it for the principal
- shoudl be the last time we touched the code, nothing else needs to be changed
- 30s allows more data to be averaged out with the anomolies measured from electrical noise to be removed
- it will change the light less often thus the students will not stand there to watch it
- the green light on top of the mic can be used to check if the calibration of the gain is corrected
- changed the name of the project to "Noisy Student Project" from "Noisy Boi Project" to use more gender neutral terms
- (maybe we changed it before today im not sure) but ms teo was made aware of it today
- heard from other students it works sometimes when they tried to use it

things done: 
- acrylic top pannel was created
- tuned the mic to the correct sensitivity

things to improve: 
- add proper connectors for the rgb
- test the mic amps: jay
- test the rf moduled: karlok
- redesign led case: karlok
- redesign led mounting system: karlok (jay has some comments about this)


24/2/23: Update
- 22-23 feb data was very good
- we are able to see when the students are making noise
- the students breaks and end of school times were clearly visiable in the graph
- changed the limit when quiet to 800
- changed the limit when abit noisy to 550 and 800
- changed the limit when very noisy 550
- sensor will be placed at corridor between canteen and science lab
- sound sensor to be placed in science lab to record and corelate data
- v2 will have design improvements
- this mic is probably good enough and we wont need to get a different long range mic
- there was an error in the google sheets
    - taking the last 3 numbers willl miss out the times when the number is at 1020 and take it as 20
    - making it show up as anamoly
- changed to take the last 4 numbers

things to improve: 
- see 22feb comments
- led wire needs strain relief
- v2 to be done by next fri(3 mar)
- create a noise recorder for sci lab(sensor+sdcard)
- generally clean it up