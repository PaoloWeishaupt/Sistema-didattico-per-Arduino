boolean ottieniStatoBottone(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}
