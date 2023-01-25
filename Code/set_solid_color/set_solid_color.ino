#include <FastLED.h>
#define NUM_LEDS 10
#define DATA_PIN 8
CRGB leds[NUM_LEDS];
void setup() {
   	delay(2000);
    FastLED.addLeds<WS2812, DATA_PIN, GRB>(leds, NUM_LEDS);  // GRB ordering is typical
}

void loop() {
   for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      leds[whiteLed] = CRGB::Orange;
      FastLED.show();
      FastLED.setBrightness(  200 );
   }
}
