/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.12
*/

// Include this library's description file.
#include "LightSingleLed.h"

/**
 Costruttore personalizzato.
 @param pin Pin del led utilizzato.
*/
LightSingleLed::LightSingleLed(int pin)
{
	pinMode(pin,INPUT);
	_pin = pin;
}

/**
 Metodo che accende un led.
 @param pin Pin da accendere.
*/
bool lightSingleLed(int pin){
  return digitalRead(_pin);
}
