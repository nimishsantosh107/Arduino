#include <Adafruit_NeoPixel.h>
#include<Ultrasonic.h>

Ultrasonic ultrasonic(5,10);

int ledStripPin = 2;
Adafruit_NeoPixel pixels = Adafruit_NeoPixel(14, ledStripPin, NEO_GRB + NEO_KHZ800);

void setup()
{
  Serial.begin(9600);
  pixels.begin();
  pixels.show();
}
int a,b;

void ripple(int a,int b,int e,int j){
  
    for(int i=0; i<14; i++)
    { 
     a=6+i;  b=6-i;
    pixels.setPixelColor(a-1, pixels.Color(5, 66,170));
    pixels.setPixelColor(b+1, pixels.Color(5, 66,170));
    pixels.show();
    
    pixels.setPixelColor(a, pixels.Color(45, 106,250));
    pixels.setPixelColor(b, pixels.Color(45, 106,250));
    pixels.show();

    int c=6+j;int d=6-j;
    pixels.setPixelColor(c-1, pixels.Color(5, 66,170));
    pixels.setPixelColor(d+1, pixels.Color(5, 66,170));
    pixels.show();
  
    pixels.setPixelColor(c, pixels.Color(45, 106,255));
    pixels.setPixelColor(d, pixels.Color(45, 106,255));
    pixels.show();
    delay(e);
    j+=2;
  }
}



void loop()
{   
    int j=3;
    long dist = ultrasonic.getDistance();
    delay(100);
    long dist2 = ultrasonic.getDistance();
    Serial.print(dist);
    Serial.print(" .  ");
    Serial.println(dist2);
    int del=dist-dist2;
    if(del>10){
      for(int i=10;i<=40;i+=2){
        ripple(a,b,i,j);
      }
    }
}
    
    
   

