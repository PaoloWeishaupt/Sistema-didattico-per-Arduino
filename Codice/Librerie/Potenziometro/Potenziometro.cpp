/**
 @author Carlo Pezzotti
 @last modified Carlo Pezzotti
 @version 2018.14.12
*/

// Include this library's description file.

#include "Potenziometro.h"
#import <Arduino.h>

/**
 Costruttore personalizzato.
 @param pin Pin del potenziometro utilizzato.
*/
Potenziometro::Potenziometro(int pin)
{
	pinMode(pin,INPUT);
	_pin = pin;
}

/**
 Metodo che ritorna il valore del potenziometro.
 @return il valore del potenziometro
*/
int Potenziometro::ottieniValorePotenziometro(){
	return analogRead(_pin);
}
