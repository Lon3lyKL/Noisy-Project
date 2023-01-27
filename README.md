# Noisy-Project
This is a project by SSTudents for SSTudent to tell them to keep quiet during O Level Practical ;-;

Resources:
- https://arduino-tutorials.net/tutorial/drawing-sound-sensor-data-on-serial-plotter

each Led Package draws 50mA of curent at 5v https://www.pololu.com/product/2547
we have 100 leds which means 50mA*100=5000mA=5A
the voltage regulator on the mega is a D24V5F5, which outputs at 5v at a max of 500mA https://forum.arduino.cc/t/replace-voltage-regulator-on-arduino-mega/402325/4 

27/1/23: Things to do

Kar Lok:
-   add a dc voltage regulator that can supply >3A current
    - we can use this 5v5A one https://www.amazon.sg/Pololu-Step-Down-Voltage-Regulator-D24V50F5/dp/B01M659ER2 
-   make the Rtc + SD card work
    - sd card formatting should be [dd/mm/yy_hh.mm.ss_data]
-  change the mega to a mini(save space)
-  redesigning the lights
    - mounting of the leds
    diffuser
    distance to diffuser

Jay:
-   try to do mic v2 and make it work with a condensor mic