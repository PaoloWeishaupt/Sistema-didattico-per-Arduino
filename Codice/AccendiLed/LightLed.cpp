/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.09
*/

// Include this library's description file.
#include "LightLed.h"

/**
 Costruttore personalizzato.
 @param pinRed Pin del led rosso.
 @param pinGreen Pin del led verde.
 #param pinBlue Pin del led blu.
*/
LightLed::LightLed(int pinRed, int pinGreen, int pinBlue)
{
	pinMode(pinRed,INPUT);
  pinMode(pinGreen,INPUT);
  pinMode(pinBlue,INPUT);
	_pinRed = pinRed;
	_pinGreen = pinGreen;
	_pinBlue = pinBlue;
}

/**
 Metodo che accende i led del LedRGB tutti assieme in base al valore passato
 come parametro.
 @param r Valore del pin rosso.
 @param g Valore del pin verde.
 @param b Valore del pin blu.
*/
void lightLed(int r, int g, int b){
  analogWrite(_pinGreen, 255 - g);
  analogWrite(_pinRed, 255 - r);
  analogWrite(_pinBlue, 255 - b);
}