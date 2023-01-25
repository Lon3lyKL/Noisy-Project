#define sensorPin A0 // Analog input pin that the Sensor is attached to

#include <FastLED.h>
#define NUM_LEDS 60
#define DATA_PIN 8
CRGB leds[NUM_LEDS];
int myArray[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
int timelight = 0;
bool loud = false;
char j,k;
long result;
int checktime = 10;


void setup() {
  // put your setup code here, to run once:
  delay(2000);
  FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);
  pinMode(sensorPin, INPUT);
  Serial.begin(9600);// initialize serial communications at 9600 bps:
  FastLED.setBrightness(100);
}






void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(sensorPin);
  //Serial.println(sensorValue);
  //Serial.println(timelight);
  if(timelight>=checktime){
    timelight = 0;
    result = 0;
    for (j = 0; j < checktime; j++) {
      result = result + myArray[j];
    }
    result = result / checktime;
    Serial.println(result);
    if(result>600){
      loud = false;
      }
    else{
      loud = true;
      }
    //Serial.println(loud);
    int myArray[30] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
   }
   else{
      myArray[timelight]=sensorValue;
    }


    
  delay(800);
  if (loud == false){
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      leds[whiteLed] = CRGB::Green;
      FastLED.show();
   }
    }

  else{
    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      leds[whiteLed] = CRGB::Red;
      FastLED.show();
   }
    }
   timelight ++;
}
