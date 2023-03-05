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
- https://sg.rs-online.com/web/p/industrial-circular-connectors/1115761?cm_mmc=SG-PLA-DS3A-_-google-_-PLA_SG_EN_Connectors_Whoop-_-(SG:Whoop!)+Industrial+Circular+Connectors-_-1115761&matchtype=&aud-828197004210:pla-337272310299&gclid=CjwKCAiAr4GgBhBFEiwAgwORrZZUS9XTWRJ9E48UJRqFLdvWVaafYJfovye7x4pv-s9hSqEJaLw5TxoC_CEQAvD_BwE&gclsrc=aw.ds 3 pin connecter used for rgb and mic
- https://lastminuteengineers.com/ds3231-rtc-arduino-tutorial/ another rtc 
- https://jaazz.me/2014/03/11/how-to-wire-an-unbalanced-microphone-to-a-balanced-xlr-input/ xlr input
- https://www.terralec.co.uk/CableConnectors.aspx xlr input

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