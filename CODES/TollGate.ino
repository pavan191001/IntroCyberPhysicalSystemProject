#include <Servo.h>
Servo myservo1;  // create servo object to control a servo
Servo myservo2;  // create servo object to control a servo
int pos1 = 0;    // variable to store the servo position
int pos2 = 0;    // variable to store the servo position
int IRSensor1 = 10; // connect ir sensor to arduino pin 10
int IRSensor2 = 9; // connect ir sensor to arduino pin 9

void setup() {
  // put your setup code here, to run once:
  pinMode(IRSensor1, INPUT); // sensor pin INPUT
  pinMode(IRSensor2, INPUT); // sensor pin INPUT
  myservo1.attach(3);  // attaches the servo on pin 9 to the servo object
  myservo2.attach(4);  // attaches the servo on pin 9 to the servo object

}

void loop() {
  // put your main code here, to run repeatedly:
  int statusSensor1 = digitalRead(IRSensor1);
  int statusSensor2 = digitalRead(IRSensor2);
 if(statusSensor1 == LOW){
  delay(3000);
    for (pos1 = 90; pos1 >= 0; pos1 -= 1) { // goes from 0 degrees to 180 degrees
    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(3000);
  for (pos1 = 0; pos1 <= 90; pos1 += 1) { // goes from 180 degrees to 0 degrees
    myservo1.write(pos1);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

}
if(statusSensor2 == LOW){
  delay(3000);
    for (pos2 = 0; pos2 <= 90; pos2 += 1) { // goes from 0 degrees to 180 degrees
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }
  delay(3000);
  for (pos2 = 90; pos2 >= 0; pos2 -= 1) { // goes from 180 degrees to 0 degrees
    myservo2.write(pos2);              // tell servo to go to position in variable 'pos'
    delay(15);                       // waits 15ms for the servo to reach the position
  }

}

}
