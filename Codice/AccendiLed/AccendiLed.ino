#include "LightLed.h"

LightLed* led;

void setup(){
  led = new LightLed(0,1,2);
}

void loop(){
  led->lightLed(0,0,0);
}

