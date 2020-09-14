void setup() {
  // put your setup code here, to run once:
  pinMode(13,OUTPUT);
  pinMode(3,INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(13,LOW);
  if(digitalRead(3)==LOW)
    digitalWrite(13,HIGH);
}
