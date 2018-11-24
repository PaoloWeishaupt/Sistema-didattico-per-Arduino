void setup()
{
  pinMode(3,OUTPUT);
}


void loop()
{
  digitalWrite(3,getButtonState(5));
}

boolean getButtonState(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}
