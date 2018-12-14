/**
@author Carlo Pezzotti
@last modified Carlo Pezzotti
@version 2018.14.12
*/

// Include this library's description file.
#include "Buzzer.h"
#import <Arduino.h>

/**
Costruttore personalizzato.
@param pinRed Pin del led rosso.
@param pinGreen Pin del led verde.
#param pinBlue Pin del led blu.
*/

Buzzer::Buzzer(int pin)
{
  _pin = pin;
	pinMode(pin, OUTPUT);
}

/**
Metodo che accende i led del LedRGB tutti assieme in base al valore passato
come parametro.
@param duration durata del beep
@param hertz frequenza del beep
*/
void Buzzer::beep(int duration, int hertz) {
	tone(_pin,hertz,duration);
}
