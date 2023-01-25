#define sensorPin A0 // Analog input pin that the Sensor is attached to

#include <FastLED.h>
#define NUM_LEDS 60
#define DATA_PIN 8
CRGB leds[NUM_LEDS];

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
  Serial.println(sensorValue);
  delay(800);
  if (sensorValue > 1000){
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
}
