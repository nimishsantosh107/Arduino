void setup() {
  // put your setup code here, to run once:
  digitalWrite(13, 0);
}

void loop() {
  // put your main code here, to run repeatedly:

  for (int j = 0; j < 2; j++) {
    for (int i = 0; i < 175; i++) {
      analogWrite(11, i);
      delay(3);
    }
    for (int i = 175; i >= 0; i--) {
      analogWrite(11, i);
      delay(3);
    }
  }
}
