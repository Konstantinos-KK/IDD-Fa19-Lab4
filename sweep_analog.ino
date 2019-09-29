/* Sweep
 http://www.arduino.cc/en/Tutorial/Sweep
*/

#include <Servo.h>
int sensorPin = A0;
int sensorValue = 0; 
int y=0;
Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(A1);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  sensorValue = analogRead(sensorPin);
  y = map(sensorValue, 0, 1023, 0, 180);
  for (pos = 0; pos <= y; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15ms for the servo to reach the position
  }
  for (pos = y; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15ms for the servo to reach the position
  }
}
