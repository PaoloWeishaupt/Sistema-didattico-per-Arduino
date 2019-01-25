#include "ButtonState.h"

ButtonState* button;
int buttonState = 0;  
bool onAndOff = false;


void setup(){
  button = new ButtonState(0);
}

void loop(){
  buttonState = button->getStateButton();
    if (buttonState == HIGH) {
        if (onAndOff == false) {
            onAndOff = true;   
        } else {
            onAndOff = false;
        }
    }
}


