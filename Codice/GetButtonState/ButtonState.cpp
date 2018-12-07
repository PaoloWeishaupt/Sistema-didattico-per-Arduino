/**
 @author Carlo Pezzotti
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.07
*/

// Include this library's description file.
#include "Button.h"

/**
* Costruttore personalizzato.
* @param pin Pin del bottone utilizzato.
*/
ButtonState::ButtonState(int pin)
{
	pinMode(pin,INPUT);
	pin = pin;
}

/**
* Metodo che ritorna lo stato del bottone.
* @return 1 se premuto sennò 0.
*/
bool getButtonState(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}
