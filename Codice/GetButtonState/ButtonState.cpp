ButtonState::ButtonState(int pin)
{
	pinMode(pin,INPUT);
}

bool getButtonState(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}