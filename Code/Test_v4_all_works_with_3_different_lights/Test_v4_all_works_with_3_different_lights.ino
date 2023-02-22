#define sensorPin A0 // Analog input pin that the Sensor is attached to

#include <SPI.h>
#include <SD.h>

#include <DS3231.h>
DS3231  rtc(SDA, SCL);

File Data_File;

#include <FastLED.h>
#define NUM_LEDS 100 // num of leds in the rgb strip
#define DATA_PIN 9 // data pin of the rgb strip
CRGB leds[NUM_LEDS];
int checktime = 30; // the amount of time to take the average from
int brightness = 255; //brightness of the led
int myArray[30] ; // creating an array to store the data
int timelight = 0; // part of checking average 
int loud = 1; //variable to store if the light should be red or white
char j,k; 
long result;

void setup() {
  delay(2000); // delay for initialising devices
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS); // initilise argb led
  pinMode(sensorPin, INPUT); // setting input for microphone
  Serial.begin(9600);// initialize serial communications at 9600 bps:
  FastLED.setBrightness(brightness); // setting the brightness of the led

  rtc.begin();

  while (!Serial) {
    ; // wait for serial port to connect. Needed for native USB port only
  }

  Serial.print("Initializing SD card...");

  if (!SD.begin(4)) {
    Serial.println("initialization failed!");
    while (1);
  }
  Serial.println("initialization done.");
}

void loop() {
  int sensorValue = analogRead(sensorPin); //reading the sensor value
  //Serial.println(sensorValue);
  //Serial.println(timelight);
  if(timelight>=checktime){ //checking if the average should be calculated
    timelight = 0;
    result = 0;
    for (j = 0; j < checktime; j++) { //getting the average
      result = result + myArray[j];
    }
    result = result / checktime; //lower the result the louder it is
    // Send Day-of-Week
    Serial.print(rtc.getDOWStr());
    Serial.print(" ");
  
    // Send date
    Serial.print(rtc.getDateStr());
    Serial.print(" -- ");

    // Send time
    Serial.print(rtc.getTimeStr());
    Serial.print("  ");
    
    Serial.println(result);
    // Wait one second before repeating
    delay (1000);
    Data_File = SD.open("Data.txt", FILE_WRITE);

    // if the file opened okay, write to it:
    if (Data_File) {
    // Send Day-of-Week
    Data_File.print(rtc.getDOWStr());
    Data_File.print(" ");
  
    // Send date
    Data_File.print(rtc.getDateStr());
    Data_File.print(" -- ");

    // Send time
    Data_File.println(rtc.getTimeStr());
  
    // Wait one second before repeating
    delay (1000);
    // close the file:
    Serial.print("Writing...");
    Data_File.print("Average Data is: ");
    Data_File.println(result);
    Data_File.close();
    Serial.println("done.");
    }
    else {
    // if the file didn't open, print an error:
    Serial.println("error opening test.txt");
    }
    if(result<600){ 
      loud = 3; // the students are noisy
      }
    else if((result>=600)and(result<=900)){
      loud = 2; // the students are mildly noisy
      }
    else if(result>900){
      loud = 1; // the students are not noisy
      }
    //Serial.println(loud);
   }
   else{
      myArray[timelight]=sensorValue; // adding the sensor value into the array
    }
  
  if (loud == 1){
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) { 
      leds[whiteLed] = CRGB::Green; // set rgb to green
      FastLED.show();
    }
  }
  else if (loud == 2){
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) { 
      leds[whiteLed] = CRGB::Orange; // set rgb to yellow
      FastLED.show();
    }
  }
  else if (loud == 3){
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      leds[whiteLed] = CRGB::Red; // set rgb to red
      FastLED.show();
    }
  }
  
   delay(800); // delay to get exact 1 reading per second
   timelight ++; // incrementing the variable to count to average
}