void setup() {
  // put your setup code here, to run once:
  pinMode(9,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(5,INPUT_PULLUP);
  pinMode(3,INPUT_PULLUP);
  Serial.begin(9600);
}

int i= 10;
int t=-1;
void loop() {
  // put your main code here, to run repeatedly:

  
  int a=digitalRead(5);
  int b=digitalRead(3);
   if((a==0)||(b==0))
      t*=-1;
  
  if(t==1){
   if(a==0){
    if (i>255){
          analogWrite(11,255);
          digitalWrite(9,HIGH);
          }
    else{
      for(i;i<=255;i++){
        analogWrite(11,i);
        digitalWrite(9,HIGH);
        delay(10);
        }
      }
    }

    
  if(b==0){
    if (i>255){
          analogWrite(11,255);
          digitalWrite(8,HIGH);
          }
    else{
      for(i;i<=255;i++){
        analogWrite(11,i);
        digitalWrite(8,HIGH);
        delay(10);
        }
      }
    }
  }
else if(t==-1){      
    i=10;
    digitalWrite(9,LOW);
    digitalWrite(8,LOW);
}
  Serial.println(digitalRead(5));
}
