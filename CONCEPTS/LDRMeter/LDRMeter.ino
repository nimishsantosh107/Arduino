void setup() {
  // put your setup code here, to run once:
  pinMode(3,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(11,OUTPUT);
  Serial.begin(9600);
  
}



void loop() {
  // put your main code here, to run repeatedly:
  int a = analogRead(A0);
  Serial.println(a);

  if(a<50 && a>=30){
    digitalWrite(3,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(7,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    }
  if(a<30 && a>=20){
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,LOW);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    }
  if(a<20 && a>=10){
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(11,LOW);
    }
  if(a<10 && a>=2){
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11,LOW);
    }
  if(a<2){
    digitalWrite(3,HIGH);
    digitalWrite(5,HIGH);
    digitalWrite(7,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(11,HIGH);
    }
}
