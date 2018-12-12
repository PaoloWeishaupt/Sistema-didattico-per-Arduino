/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.12
*/

// Give the rest of the code access to the standard Arduino functions, and to
// the definitions in your header file
#include "Arduino.h"
// Include this library's description file.
#include "LightSingleLed.h"

/**
 Costruttore personalizzato.
 @param pin Pin del led utilizzato.
*/
LightSingleLed::LightSingleLed(int pin)
{
	pinMode(pin, OUTPUT);
	_pin = pin;
}

/**
 Metodo che accende un led.
 @param pin Pin da accendere.
*/
void LightSingleLed::lightSingleLed(){
  digitalWrite(_pin,HIGH);
}
