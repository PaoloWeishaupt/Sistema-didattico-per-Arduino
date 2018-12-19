#include "ButtonState.h"

ButtonState* button;
void setup(){
  button = new ButtonState(0);
}

void loop(){
  if(button->getStateButton()){
    //code
  }
}

