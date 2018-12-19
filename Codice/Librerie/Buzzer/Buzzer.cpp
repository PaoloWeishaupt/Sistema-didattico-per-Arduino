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
 @param pin Pin del buzzer.
*/

Buzzer::Buzzer(int pin)
{
  _pin = pin;
	pinMode(pin, OUTPUT);
}

/**
 Metodo che data una certa frequenza e una durata, fa suonare il piezo buzzer.
 @param duration durata del beep
 @param hertz frequenza del beep
*/
void Buzzer::beep(int duration, int hertz) {
	tone(_pin,hertz,duration);
}
