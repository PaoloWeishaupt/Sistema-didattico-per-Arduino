#include "ButtonState.h"
#include "LightSingleLed.h"

ButtonState* button;
LightSingleLed* led;
void setup(){
  button = new ButtonState(0);
  led = new LightSingleLed(1);
}

void loop(){
  if(button->getStateButton()){
    led->lightSingleLed();
  }
}

