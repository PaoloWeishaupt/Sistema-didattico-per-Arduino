/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.07
*/

// Ensure this library description is only included once
#ifndef LightLed_h
#define LightLed_h

// Library interface description
class LightLed
{
  // User-accessible "public" interface
  public:
    LightLed(int, int, int);
    void lightLed(int, int, int);

  public:
    int _pinRed;
    int _pinGreen;
    int _pinBlue;
};

#endif
