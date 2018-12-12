/**
 @author Paolo Weishaupt,Carlo Pezzotti
 @last modified Paolo Weishaupt
 @version 2018.12.09
*/

// Include this library's description file.
#include "LightLed.h"
#import <Arduino.h>

/**
 Costruttore personalizzato.
 @param pinRed Pin del led rosso.
 @param pinGreen Pin del led verde.
 #param pinBlue Pin del led blu.
*/
int pinRed = 0;
int pinGreen = 0;
int pinBlue = 0;

LightLed::LightLed(int pinRed, int pinGreen, int pinBlue)
{
	pinMode(pinRed,INPUT);
  pinMode(pinGreen,INPUT);
  pinMode(pinBlue,INPUT);
	pinRed = pinRed;
	pinGreen = pinGreen;
	pinBlue = pinBlue;
}

/**
 Metodo che accende i led del LedRGB tutti assieme in base al valore passato
 come parametro.
 @param r Valore del pin rosso.
 @param g Valore del pin verde.
 @param b Valore del pin blu.
*/
void lightLed(int r, int g, int b){
  analogWrite(pinGreen, 255 - g);
  analogWrite(pinRed, 255 - r);
  analogWrite(pinBlue, 255 - b);
}
