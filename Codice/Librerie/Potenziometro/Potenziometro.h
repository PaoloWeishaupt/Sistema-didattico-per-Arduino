/**
@author Carlo Pezzotti
@last modified Carlo Pezzotti
@version 2018.14.12
*/

// Ensure this library description is only included once
#ifndef Potenziometro_h
#define Potenziometro_h

// Library interface description
class Potenziometro
{
	// User-accessible "public" interface
	public:
		Potenziometro(int);
		int ottieniValorePotenziometro();
		int _pin;
}
#endif
