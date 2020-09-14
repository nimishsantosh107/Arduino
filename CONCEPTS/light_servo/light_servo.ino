#include <Adafruit_NeoPixel.h>
#include<Servo.h>

int ledStripPin = 2;
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(14, ledStripPin, NEO_GRB + NEO_KHZ800);
Servo servo;
Servo servo2;
int x=0,y=0,z=0;

int randoms(int lower, int upper)
{       int num = (rand() %(upper - lower + 1)) + lower;
        return num;
}

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pixels.begin();
  pixels.show();
  servo.attach(9);
  servo2.attach(10);
}

void loop() {
  // put your main code here, to run repeatedly:
  x=randoms(0,255);
  y=randoms(0,255);
  z=randoms(0,255);
  int temp=x;
      x=y;
      y=z;
      z=temp;
  
  for(int i=20;i<=160;i++){
      int j=map(i,20,160,0,13);
      servo.write(i);
      pixels.setPixelColor(j, pixels.Color(x, y, z));
      pixels.show();
      delay(4);
    }

      temp=x;
      x=y;
      y=z;
      z=temp;
      
  for(int i=160;i>=20;i--){
      int j=map(i,160,20,13,0);
      servo.write(i);
      pixels.setPixelColor(j, pixels.Color(x, y, z));
      pixels.show();
      delay(4);
    }
    Serial.println(x);
 }
