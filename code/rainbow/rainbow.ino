#include <Adafruit_NeoPixel.h>

#define LED_PIN    6

// Declare our NeoPixel strip object:
Adafruit_NeoPixel strip(64, LED_PIN, NEO_GRB + NEO_KHZ800);

// setup() function -- runs once at startup --------------------------------

void setup() {
  strip.begin();           // INITIALIZE NeoPixel strip object (REQUIRED)
  strip.show();            // Turn OFF all pixels ASAP
  strip.setBrightness(50); // Set BRIGHTNESS to about 1/5 (max = 255)
}


void loop() {
  rainbow(10);
}

void rainbow(int wait) {
  for(long firstPixelHue = 0; firstPixelHue < 5*65536; firstPixelHue += 256){
    strip.rainbow(firstPixelHue);
    strip.show();
    delay(wait);
  }
}
