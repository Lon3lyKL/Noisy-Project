# Noisy-Project
This is a project by SSTudents for SSTudent to tell them to keep quiet during O Level Practical ;-;

Resources:
- https://arduino-tutorials.net/tutorial/drawing-sound-sensor-data-on-serial-plotter sound sensor
- https://www.circuitbasics.com/how-to-use-a-real-time-clock-module-with-the-arduino/#:~:text=An%20RTC%20is%20a%20very,and%20Time%20on%20an%20Arduino. rtc
- https://randomnerdtutorials.com/guide-for-microphone-sound-sensor-with-arduino/ sound sensor
- https://www.instructables.com/Arduino-Audio-Input/ arduino audio input
- https://circuitdigest.com/microcontroller-projects/interfacing-ds3231-rtc-with-arduino-and-diy-digital-clock#:~:text=The%20RTC%20keeps%20track%20of,hour%20or%2012%2Dhour%20mode. arduino rtc how to use
- https://forum.arduino.cc/t/zs-042-ds3231-rtc-module/268862 notes about the rtc charging circuit
- https://digitalab.org/2016/08/microphone-pre-amplifier-using-lm358/#.Y_Y89exBwdH lm358 audio preamp
- https://digitalab.org/2012/10/audio-amplifier-using-lm386/#.Y_Y89exBwdF lm386 audio amp
- https://www.digikey.sg/en/products/detail/texas-instruments/LM358P/277042 lm358 datasheet
- https://www.ti.com/lit/ds/symlink/lm358.pdf?HQS=dis-dk-null-digikeymode-dsf-pf-null-wwe&ts=1675382777300&ref_url=https%253A%252F%252Fwww.ti.com%252Fgeneral%252Fdocs%252Fsuppproductinfo.tsp%253FdistId%253D10%2526gotoUrl%253Dhttps%253A%252F%252Fwww.ti.com%252Flit%252Fgpn%252Flm358 lm358 datasheet again
- https://www.whitenoisestudio.com/how-to/cable-soldering-schematics/ xlr mic wiring digram
- https://bestengineeringprojects.com/microphone-amplifier-using-op-amp-741/ lm741 preamp
- https://bestengineeringprojects.com/dynamic-microphone-pre-amplifier-circuit/ dynamic mic preamp without ic
- http://www.learningaboutelectronics.com/Articles/Difference-amplifier-circuit.php lm741 preamp(didnt work)
- http://www.learningaboutelectronics.com/Articles/How-to-connect-a-LM741-op-amp-chip-to-a-circuit lm741 amp(didnt work again)
- https://www.got-it.ai/solutions/excel-chat/excel-tutorial/miscellaneous/copy-value-from-every-nth-row copying from every nth row excel
- https://spreadsheetpoint.com/apply-formula-to-entire-column-google-sheets/ apply formula to entire column (Cmd+D)
- https://spreadsheetpoint.com/how-to-insert-multiple-columns-in-google-sheets/#:~:text=If%20you%20want%20to%20insert%20a%20really%20large%20number%20of,of%2026%20at%20a%20time.&text=This%20happens%20because%2C%20by%20default,Sheets%20only%20displays%2026%20columns. add more columns (Cmd+A then insert columns)
- https://www.google.com/search?q=long+range+microphone&sxsrf=AJOqlzU-5-aMhFA42eUlng8by9MDt4nGLQ:1677038224791&source=lnms&tbm=isch&sa=X&ved=2ahUKEwjD_6adnqj9AhW20nMBHdwJC6UQ_AUoAnoECAEQBA&biw=3840&bih=1954&dpr=1 long range mic search



Others:
- https://www.convert-measurement-units.com/conversion-calculator.php?type=kapazitaet  unit conversion calculator to save time LMAO
- https://www.google.com/search?q=ua741+amplifier+circuit&sxsrf=AJOqlzUbv5ikuXIHZ8xnx3ahKZQfAVGcqA%3A1675410163673&ei=87rcY5jhKM6_3LUPo6qiUA&oq=ua741cp+ampli&gs_lcp=Cgxnd3Mtd2l6LXNlcnAQARgAMgYIABAWEB4yBggAEBYQHjIGCAAQFhAeMgYIABAWEB4yBggAEBYQHjIFCAAQhgMyBQgAEIYDMgUIABCGAzIFCAAQhgM6CggAEEcQ1gQQsAM6BAgjECc6CggAEIAEEBQQhwI6BQgAEIAESgQIQRgASgQIRhgAUJECWMU5YOZFaAFwAXgDgAGgCYgBqCGSAQc1LjYtMi4ymAEAoAEByAEIwAEB&sclient=gws-wiz-serp#imgrc=So5QYvl2Z1KFyM lm741 amps (google search)


each Led Package draws 50mA of curent at 5v https://www.pololu.com/product/2547
we have 100 leds which means 50mA*100=5000mA=5A
the voltage regulator on the mega is a D24V5F5, which outputs at 5v at a max of 500mA https://forum.arduino.cc/t/replace-voltage-regulator-on-arduino-mega/402325/4 


Arduino & C++ extension can be added to vscode to use to write arduino
arduino can be programmed through vscode and not need to use the arduino app
guide of how to use it https://www.youtube.com/watch?v=WVZxK2MEbE4

github notes: https://stackoverflow.com/questions/30038999/differences-between-commit-commit-and-push-commit-and-sync#:~:text=%22Commit%22%3A%20saves%20your%20changes,them%20with%20your%20local%20repository%20%22 
In GitHub, the "commit" action saves your changes to the local repository, while the "push" action sends those changes to a remote repository. "Commit and push" combines these two actions into one, allowing you to save your changes locally and then push them to a remote repository with a single command.

"Commit and sync" is a similar concept, but it also pulls down any changes from the remote repository that have been made since your last commit. This allows you to keep your local repository up to date with the latest changes from other contributors.

Finally, "commit and create pull request" combines the commit and push actions with the creation of a new pull request. This allows you to propose your changes for review by other contributors to the project, and start a discussion about the changes you've made.

In summary, the differences between these options are:

"Commit": saves your changes to the local repository "Commit and push": saves your changes to the local repository and pushes them to the remote repository "Commit and sync": saves your changes to the local repository, pulls down any new changes from the remote repository, and merges them with your local repository "Commit and create pull request": saves your changes to the local repository, pushes them to the remote repository, and creates a new pull request for review.
- https://www.pagerduty.com/resources/learn/what-is-a-pull-request/#:~:text=A%20pull%20request%20%E2%80%93%20also%20referred,with%20the%20main%20project%20repository. what pull requests are (tell others you are done and need a review of code)

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



23/2/23: Update
- we got the data from 8-10 feb and it was ok, sensitivity of the mic has to be changed
    - at soome poitns the mic recoded 22 whcih was loud(we still have no clue what happened)
- changed the sampling rate to every 30 seconds form every 10 seconds
- changed the parameters for when the light will trigger for the dfferent volumes
    - >900 == quiet
    - >600 <900 == modertely noisy
    - <600 == very noisy
- tested it with some of us talking and got it to moderate noise
- realised the rtc was configured to be one day ahead(small problem, the date wont be used)
- planning to leave it until 24 feb(fri) even overnicet to collect the data
- fine tuning the number to be able to record a video of ti for the principal
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