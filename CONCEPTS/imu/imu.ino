#include <IMUGY85.h>

IMUGY85 imu;
double roll, pitch, yaw;

void setup() {
  // put your setup code here, to run once:
  // pinMode(11,OUTPUT);
  // pinMode(9,OUTPUT);
  imu.init();
  Serial.begin(9600);
}
int i=255,j=0;

void loop() {
  // put your main code here, to run repeatedly:
  imu.update();
  roll = imu.getRoll();
  pitch = imu.getPitch();
  yaw = imu.getYaw();
  Serial.print(pitch);Serial.print("\t");
  Serial.print(roll);Serial.print("\t");
  Serial.print(yaw);Serial.print("\t");
  if(roll>0){
    if(i!=0){
      for(i=255;i>=0;i--){
      analogWrite(11,i);
      delay(1);
      }
    }
    else{analogWrite(11,0);}
    if(j!=255){
        for(j=0;j<=255;j++){
        analogWrite(9,j);
        delay(1);
        }
      }
    else{analogWrite(11,255);}

  }
  if(roll<=0){
    if(j!=0){
      for(j=255;j>=0;j--){
      analogWrite(9,j);
      delay(1);
      }
    }
    else{analogWrite(9,0);}
    
     if(i!=255){
        for(i=0;i<=255;i++){
        analogWrite(11,i);
        delay(1);
        }
      }
    else{analogWrite(11,255);}
    }
}
