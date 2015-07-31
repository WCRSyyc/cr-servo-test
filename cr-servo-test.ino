
#include <Servo.h>
Servo myservoA;
Servo myservoB;
Servo myservoC;

void setup() {
  Serial.begin(9600);
  myservoA.attach(22); 
  myservoB.attach(23);
  myservoC.attach(24); 
}
//---------------------------------end of Void Setup----------------------------------

void loop () {
  myservoA.write(88);
  myservoB.write(90);
  myservoC.write(90);
//  delay(5000);
//  myservoA.write(90);
//  myservoB.write(100);
//  myservoC.write(80);
//  delay(5000);
//  myservoA.write(100);
//  myservoB.write(80);
//  myservoC.write(90);
//  delay(5000);
}
//---------------------------------end of void loop----------------------------------

