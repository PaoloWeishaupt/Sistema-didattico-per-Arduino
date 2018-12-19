/**
 @author Paolo Weishaupt
 @author Carlo Pezzotti
 @last modified Paolo Weishaupt
 @version 2018.12.19
*/

// Ensure this library description is only included once
#ifndef ButtonState_h
#define ButtonState_h

// Library interface description
class ButtonState
{
  // User-accessible "public" interface
  public:
    int _pin;
    ButtonState(int);
    bool getStateButton();
};

#endif
