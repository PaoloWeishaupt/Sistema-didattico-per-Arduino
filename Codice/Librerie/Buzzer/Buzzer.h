/**
 @author Carlo Pezzotti
 @last modified Paolo Weishaupt
 @version 2018.12.19
*/

// Ensure this library description is only included once
#ifndef Buzzer_h
#define Buzzer_h

// Library interface description
class Buzzer
{
	// User-accessible "public" interface
  public:
	  int _duration;
		int _hertz;
		int _pin;
		Buzzer(int);
		void beep(int, int);
};

#endif
