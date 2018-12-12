/**
 @author Carlo Pezzotti
 @author Paolo Weishaupt
 @last modified Carlo Pezzotti
 @version 2018.12.12
*/

// Include this library's description file.

#include "ButtonState.h"
#import <Arduino.h>

/**
 Costruttore personalizzato.
 @param pin Pin del bottone utilizzato.
*/
ButtonState::ButtonState(int pin)
{
	pinMode(pin,INPUT);
	_pin = pin;
}

/**
 Metodo che ritorna lo stato del bottone.
 @return 1 se premuto sennò 0.
*/
bool ButtonState::getStateButton(){
	return digitalRead(_pin);
}
