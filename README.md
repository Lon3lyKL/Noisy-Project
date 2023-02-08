# Noisy-Project
This is a project by SSTudents for SSTudent to tell them to keep quiet during O Level Practical ;-;

Resources:
- https://arduino-tutorials.net/tutorial/drawing-sound-sensor-data-on-serial-plotter sound sensor
- https://www.circuitbasics.com/how-to-use-a-real-time-clock-module-with-the-arduino/#:~:text=An%20RTC%20is%20a%20very,and%20Time%20on%20an%20Arduino. rtc
- https://randomnerdtutorials.com/guide-for-microphone-sound-sensor-with-arduino/ sound sensor


each Led Package draws 50mA of curent at 5v https://www.pololu.com/product/2547
we have 100 leds which means 50mA*100=5000mA=5A
the voltage regulator on the mega is a D24V5F5, which outputs at 5v at a max of 500mA https://forum.arduino.cc/t/replace-voltage-regulator-on-arduino-mega/402325/4 


Arduino & C++ extension can be added to vscode to use to write arduino
arduino can be programmed through vscode and not need to use the arduino app
guide of how to use it https://www.youtube.com/watch?v=WVZxK2MEbE4




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

