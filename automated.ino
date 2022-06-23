int relaypin = 8; 
int trigPin = 9;
int echoPin = 10;
long duration;
int distance;

void setup() 
{
Serial.begin(9600); 
pinMode(trigPin, OUTPUT); 
pinMode(echoPin, INPUT); 
pinMode(relaypin, OUTPUT);
}

void loop() 
{
  digitalWrite(trigPin,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin, LOW);
  duration=pulseIn(echoPin, HIGH);
  distance =(duration/2)/29.1;
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
 
  if((distance<=10)) 
  {
    digitalWrite(relaypin, LOW);
  }
   else if(distance>10)
  {
     digitalWrite(relaypin, HIGH);
  }
}
