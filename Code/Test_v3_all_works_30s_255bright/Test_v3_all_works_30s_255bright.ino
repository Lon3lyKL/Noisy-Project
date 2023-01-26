#define sensorPin A0 // Analog input pin that the Sensor is attached to

#include <FastLED.h>
#define NUM_LEDS 60 // num of leds in the rgb strip
#define DATA_PIN 8 // data pin of the rgb strip
CRGB leds[NUM_LEDS];
int checktime = 30; // the amount of time to take the average from
int brightness = 255; //brightness of the led
int myArray[30] ; // creating an array to store the data
int timelight = 0; // part of checking average 
bool loud = false; //variable to store if the light should be red or white
char j,k; 
long result;

void setup() {
  delay(2000); // delay for initialising devices
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS); // initilise argb led
  pinMode(sensorPin, INPUT); // setting input for microphone
  Serial.begin(9600);// initialize serial communications at 9600 bps:
  FastLED.setBrightness(brightness); // setting the brightness of the led
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
    result = result / checktime;
    Serial.println(result);
    if(result<600){ //lower the result the louder it is
      loud = true; // the students are noisy
      }
    else{
      loud = false; // the students are not noisy
      }
    //Serial.println(loud);
   }
   else{
      myArray[timelight]=sensorValue; // adding the sensor value into the array
    }
  
  if (loud == false){
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) { 
      leds[whiteLed] = CRGB::Green; // set rgb to green
      FastLED.show();
   }
    }

  else{
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      leds[whiteLed] = CRGB::Red; // set rgb to red
      FastLED.show();
   }
    }
   delay(800); // delay to get exact 1 reading per second
   timelight ++; // incrementing the variable to count to average
}
