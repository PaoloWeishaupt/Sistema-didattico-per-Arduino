#include "Buzzer.h"

Buzzer* buzzer;
void setup(){
buzzer = new Buzzer(0);
}
void loop(){
  buzzer->beep(1,261);
  
}
