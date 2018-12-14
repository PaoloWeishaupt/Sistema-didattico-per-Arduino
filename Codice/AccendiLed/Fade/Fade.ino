#include "LightLed.h"

LightLed* led;

void setup(){
  led = new LightLed(0,1,2);
}

void loop(){
  for(int i = 0; i < 255; i++){
    for(int j = 0; j < 255; j++){
      for(int z = 0; z < 255; z++){
        led->lightLed(i,j,z);
      }
    }
  }
}

