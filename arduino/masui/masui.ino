void setup(){
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
  pinMode(13, OUTPUT);
}

void loop(){
  digitalWrite(13, LOW);
  Serial.println(digitalRead(8));
  if(digitalRead(8) == LOW){
    digitalWrite(13, HIGH);
  }
  delay(1);
}
