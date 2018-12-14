/**
 @author Paolo Weishaupt
 @author Carlo PEzzotti
 @last modified Carlo Pezzotti
 @version 2018.12.12
*/

// Ensure this library description is only included once
#ifndef ButtonState_h
#define ButtonState_h

// Library interface description
class ButtonState
{
  // User-accessible "public" interface
  public:
    ButtonState(int);
    bool getStateButton();

  // Library-accessible "private" interface
  public:
    int _pin;
};

#endif
