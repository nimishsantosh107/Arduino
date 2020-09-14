const int up = 8;
const int down = 6;
const int left = 3;
const int right = 11;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(up,OUTPUT);
  pinMode(down,OUTPUT);
  pinMode(left,OUTPUT);
  pinMode(right,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  int a=analogRead(A0);
  int b=analogRead(A1);
      
  if((a > 500) && (b < 1024) && (b>600)){
      digitalWrite(up,HIGH);
      digitalWrite(down,LOW);
      digitalWrite(left,LOW);
      digitalWrite(right,LOW);
    }
  else if((a > 500) && (b < 400) && (b>0)){
      digitalWrite(up,LOW);
      digitalWrite(down,HIGH);
      digitalWrite(left,LOW);
      digitalWrite(right,LOW);
    }
  else if((a > 600) && (a < 1024) && (b>500)){
      digitalWrite(up,LOW);
      digitalWrite(down,LOW);
      digitalWrite(left,HIGH);
      digitalWrite(right,LOW);
    }
  else if((a > 0) && (a < 400) && (b>500)){
      digitalWrite(up,LOW);
      digitalWrite(down,LOW);
      digitalWrite(left,LOW);
      digitalWrite(right,HIGH);
    }

  else{digitalWrite(up,LOW);
      digitalWrite(down,LOW);
      digitalWrite(left,LOW);
      digitalWrite(right,LOW);
    }
  
  Serial.print(a);
  Serial.print("\t");  
  Serial.println(b); 
}
