#include "LightLed.h"

LightLed* ledRGB;

void setup(){
  ledRGB = new LightLed(0,1,2);
}

void loop(){
  ledRGB->lightLed(255,0,0);
  delay(500);
  ledRGB->lightLed(0,0,255);
  delay(500);
}
