#include "DigiKeyboard.h"
#define MOD_SHIFT_LEFT      (1<<1)  //00000010
#define MOD_GUI_LEFT        (1<<3)  //00001000
#define MOD_CONTROL_LEFT    1
#define KEY_ENTER   40
#define KEY_C       6
#define KEY_M       16
#define KEY_D       7
void setup() {
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(0, MOD_GUI_LEFT);
  DigiKeyboard.delay(100);
  DigiKeyboard.println("blocco note");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
  DigiKeyboard.println("prova");
  DigiKeyboard.delay(500);
  DigiKeyboard.sendKeyStroke(KEY_ENTER);
}

void loop() {
   
}
