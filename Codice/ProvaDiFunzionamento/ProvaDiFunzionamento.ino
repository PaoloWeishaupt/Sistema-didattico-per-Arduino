void setup() {
  pinMode(5,INPUT);
  Serial.begin(9600);
}

void loop() {
   if(digitalRead(5) == HIGH){
    DigiKeyboard.println("Hello Digispark!");
   }
}
