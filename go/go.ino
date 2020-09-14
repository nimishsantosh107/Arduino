#include <IMUGY85.h>

 //Serial.print(pitch);Serial.print("\t");
 //pitch = imu.getPitch();

IMUGY85 imu;
double roll, pitch, yaw;

int ran(int lower, int upper)
{       int num = (rand() % (upper - lower + 1)) + lower;
        return num;
}


void setup()
{
  Serial.begin(9600);
  imu.init();
}


int y=-72;
int z=215;



void loop()
{ 
  
  imu.update();
  float r1=imu.getRoll()-y;
  float y1=imu.getYaw()-z;
  //Serial.print(r1);Serial.print("\t");
  //Serial.print(y1);Serial.print("\t\t");
  delay(10);
  imu.update();
  float r2=imu.getRoll()-y;
  float y2=imu.getYaw()-z;
  //Serial.print(r2);Serial.print("\t");
  //Serial.print(y2);Serial.print("\t");
  //Serial.println();
  
  if(r2<r1 || y2<y1)
    Serial.println("yes");
  else
    Serial.println("no");
}
