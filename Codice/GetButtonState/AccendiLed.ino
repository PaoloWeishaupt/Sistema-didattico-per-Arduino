void accendiLed(int r, int g, int b,int pinRed,int pinGreen,int pinBlue){
  pinMode(pinRed,OUTPUT);  
  pinMode(pinBlue,OUTPUT);  
  pinMode(pinGreen,OUTPUT);  
  analogWrite(pinGreen,255-g);
  analogWrite(pinRed,255-r);
  analogWrite(pinBlue,255-b);
}
