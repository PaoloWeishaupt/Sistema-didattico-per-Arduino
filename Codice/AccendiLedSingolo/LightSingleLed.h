/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.12
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
    void lightSingleLed(int);

  // Library-accessible "private" interface
  private:
    int _pin;
};

#endif
