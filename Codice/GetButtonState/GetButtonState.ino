int r = 0;
int g = 0;
int b = 0;
void setup()
{
  Serial.begin(9600);
}


void loop()
{
  if(getButtonState(52)){
    r++;
  }
  if(getButtonState(50)){
    g++;
  }
  if(getButtonState(48)){
    b++;
  }
  accendiLed(r,g,b,2,3,4);
  delay(20);
}

boolean getButtonState(int pin){
  pinMode(pin,INPUT);
  return digitalRead(pin);
}

void accendiLed(int r, int g, int b,int pinRed,int pinGreen,int pinBlue){
  pinMode(pinRed,OUTPUT);  
  pinMode(pinBlue,OUTPUT);  
  pinMode(pinGreen,OUTPUT);  
  analogWrite(pinGreen,255-g);
  analogWrite(pinRed,255-r);
  analogWrite(pinBlue,255-b);
}
