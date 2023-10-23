void setup() {
  pinMode(10, OUTPUT);
}

void loop() {
  for(int i = 0; i < 3; i++){
    digitalWrite(10,HIGH);
    delay(400);
    digitalWrite(10,LOW);
    delay(400);
  }
  for(int j = 0; j < 3; j++){
    digitalWrite(10,HIGH);
    delay(400);
    digitalWrite(10,LOW);
    delay(400);
  }
  for(int i = 0; i < 3; i++){
    digitalWrite(10,HIGH);
    delay(300);
    digitalWrite(10,LOW);
    delay(300);
  }
  delay(500);
}