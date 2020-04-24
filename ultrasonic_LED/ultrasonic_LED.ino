int trig = 9;
int echo = 10;


void setup() {
  Serial.begin(9600);
  pinMode(trig, OUTPUT);
  pinMode(echo,INPUT);
  pinMode(3,OUTPUT);
  

}

void loop() {
  long dur, dist;
  digitalWrite(trig, HIGH);
  delayMicroseconds(1000);
  digitalWrite(trig, LOW);

  dur=pulseIn(echo, HIGH);
  dist = (dur/2)/29.1;

  if(dist<500){
    digitalWrite(3, HIGH);
    }
    else

      digitalWrite(3, LOW);
      Serial.print(dist);
      Serial.print("cm");
      delay(100);
      Serial.println("");
     
  

}
