#include<Servo.h>
Servo servo;

void setup() {
  // put your setup code here, to run once:
  servo.attach(9);
}

void loop() {
  // put your main code here, to run repeatedly:
  for(int i=1;i<=180;i++){
      servo.write(i);
      delay(10);
    }
  for(int i=180;i>=0;i--){
      servo.write(i);
      delay(10);
    }
}
