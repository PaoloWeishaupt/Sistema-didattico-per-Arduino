
void setup()
{
  pinMode(0,OUTPUT);
}


void loop()
{
  if(getButtonState(5) == HIGH){
    digitalWrite(0,HIGH);
  }
}

boolean getButtonState(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}
