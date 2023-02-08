int motor1=13;
int motor2=12;
int trigpin=9;
int echopin=8;
long Time;int c=0;
int distance;
 void setup()
  {
  
  pinMode(trigpin,OUTPUT);
  pinMode(echopin,INPUT);
  pinMode(motor1,OUTPUT);
  pinMode(motor2,OUTPUT);

  }

void loop() {
digitalWrite(trigpin,LOW);
delayMicroseconds(2);
digitalWrite(trigpin,HIGH);
delayMicroseconds(10);
digitalWrite(trigpin,LOW);
Time=pulseIn(echopin,HIGH);
distance=(Time*0.034)/2;
c++;
if(distance>15)
{
 digitalWrite(motor1,HIGH);
 digitalWrite(motor2,HIGH);
 
}
else if(distance<=15 && c%2==0)
{
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,LOW);
 delay(500);
 digitalWrite(motor1,HIGH);
 digitalWrite(motor2,LOW);
 delay(500);
}
else if(distance<=15 && c%2==0)
{
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,LOW);
 delay(500);
 digitalWrite(motor1,HIGH);
 digitalWrite(motor2,LOW);
 delay(500);
}
else if(distance<=15 && c%2!=0)
{
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,LOW);
 delay(500);
 digitalWrite(motor1,LOW);
 digitalWrite(motor2,HIGH);
 delay(500);
}

}
