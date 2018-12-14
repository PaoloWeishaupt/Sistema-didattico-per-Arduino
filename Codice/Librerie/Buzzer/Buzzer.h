/**
@author Carlo Pezzotti
@last modified Carlo Pezzotti
@version 2018.14.12
*/

// Ensure this library description is only included once
#ifndef Buzzer_h
#define Buzzer_h

// Library interface description
class Buzzer
{
	// User-accessible "public" interface
public:
	Buzzer(int);
	void beep(int, int);

public:
	int _duration;
	int _hertz;
  int _pin;
};

#endif
