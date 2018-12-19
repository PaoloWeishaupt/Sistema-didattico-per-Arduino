/**
 @author Paolo Weishaupt
 @last modified Carlo Pezzotti
 @version 2018.12.19
*/

// Ensure this library description is only included once
#ifndef LightSingleLed_h
#define LightSingleLed_h

// Gives you access to the standard types and constants of the Arduino language
#include "Arduino.h"

// Library interface description
class LightSingleLed
{
  // User-accessible "public" interface
  public:
    LightSingleLed(int);
    void lightSingleLed();
	  void turnOffSingleLed();

  // Library-accessible "private" interface
  private:
    int _pin;
};

#endif
