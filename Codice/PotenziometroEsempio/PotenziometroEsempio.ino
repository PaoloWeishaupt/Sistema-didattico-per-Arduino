#include "DigiKeyboard.h"
#include "Potenziometro.h"

Potenziometro* potenziometro;
void setup(){
  potenziometro = new Potenziometro(4); 
}

void loop(){
  int valorePotenziometro = potenziometro->ottieniValorePotenziometro();  
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.println(valorePotenziometro);
  delay(200); 
}
