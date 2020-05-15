//HyperLab
#include <NewPing.h>
#include <Servo.h>
#define TRIG 7
#define ECHO 8
#define MAX 500
int dist=0;
 
NewPing ultra(TRIG, ECHO, MAX);
Servo myservo;
Servo myservo2;

void setup() 
{
  Serial.begin(9600);
  myservo.attach(3);
  myservo.write(0);
}

void loop() 
{
  dist=ultra.ping_cm();
  Serial.print("Dist : ");
  Serial.println(dist);
  if(dist>5 && dist<12)
  {
    myservo.write(120);
  }
  delay(500);
  myservo.write(10);
}
