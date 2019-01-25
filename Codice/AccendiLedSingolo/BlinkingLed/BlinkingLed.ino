#include "ButtonState.h"
#include "LightSingleLed.h"

ButtonState* button;
LightSingleLed* led;
int tempo = 0;
bool iniziaAContare = false;
bool lampeggia = false;

void setup(){
  button = new ButtonState(0);
  led = new LightSingleLed(1);
}

void loop(){
  if(button->getStateButton() || (iniziaAContare && tempo > 200)){
    iniziaAContare = true;
    lampeggia = true;
    led->lightSingleLed();
  }else{

  }
  if(lampeggia){
    led->lightSingleLed();
    delay(500);
    led->turnOffSingleLed();
    delay(500);
  }
  if(iniziaAContare && !button->getStateButton())
    tempo++;
}


