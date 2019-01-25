/**
 @author Paolo Weishaupt,Carlo Pezzotti
 @last modified Paolo Weishaupt
 @version 2018.12.19
*/

// Ensure this library description is only included once
#ifndef LightLed_h
#define LightLed_h

// Library interface description
class LightLed
{
  // User-accessible "public" interface
  public:
    int _pinRed;
    int _pinGreen;
    int _pinBlue;
    LightLed(int, int, int);
    void lightLed(int, int, int);
};

#endif
