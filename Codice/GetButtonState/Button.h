/**
 @author Paolo Weishaupt
 @last modified Paolo Weishaupt
 @version 2018.12.07
*/

// Ensure this library description is only included once
#ifndef Button_h
#define Button_h

// Library interface description
class Button
{
  // User-accessible "public" interface
  public:
    ButtonState(int);
    bool getButtonState();

  // Library-accessible "private" interface
  private:
    int _pin;
};

#endif
