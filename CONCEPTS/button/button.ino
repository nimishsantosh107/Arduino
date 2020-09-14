 
int t=-1;

void setup() {
  // put your setup code here, to run once:
  pinMode(11,INPUT);
  pinMode(13,OUTPUT);
  Serial.begin(9600);
}


void loop() {
  // put your main code here, to run repeatedly:
  int s= digitalRead(11);
  if(s==1)
    t*=-1;
    
  if(t==1){
    digitalWrite(13,HIGH);
  }
  else{
    digitalWrite(13,LOW);
  }
  Serial.println(t);
} 
