#include <Ultrasonic.h>

Ultrasonic ultrasonic(5,10);

void setup() {
  // put your setup code here, to run once:
  pinMode(2,OUTPUT);
  Serial.begin(9600);
}

void loop() {
  // put your main code here, to run repeatedly:
  long distance = ultrasonic.getDistance();
  Serial.println(distance);
  if(distance>120){
      digitalWrite(2,HIGH);
      delay(1000);
      digitalWrite(2,LOW);
      delay(1000);
    }
  else if(distance>50 && distance<=120){
      digitalWrite(2,HIGH);
      delay(500);
      digitalWrite(2,LOW);
      delay(500);
    }
  else if(distance>30){
      digitalWrite(2,HIGH);
      delay(100);
      digitalWrite(2,LOW);
      delay(100);
    }
  else if(distance<20){
      digitalWrite(2,HIGH);
      delay(30);
      digitalWrite(2,HIGH);
      delay(30);
    }
}
