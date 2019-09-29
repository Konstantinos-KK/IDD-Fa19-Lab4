# Paper Puppets

*A lab report by Konstantinos Karras Kallidromitis*

## Part A. Actuating DC motors

**Link to a video of your virbation motor** [Youtube Video](https://youtu.be/xtYdkZ5A5lQ)

## Part B. Actuating Servo motors

### Part 1. Connect the Servo to your breadboard

**a. Which color wires correspond to power, ground and signal?** Yellow: Signal (Input Pin) , Red: Power (VDD - 5V), Brown: Ground

### Part 2. Connect the Servo to your Arduino

**a. Which Arduino pin should the signal line of the servo be attached to?** PIN-9

**b. What aspects of the Servo code control angle or speed?** They delay controls the speed. The lower the delay the faster the motor moves to the new position. The angle is determined by the variable pos. However, the variable pos should be changed in both for loops inside the code since it should be able to retunr to the initial position. The following code is adapted from sweep and uses a fast speed (delay=1ms) and rotates at 90 degrees:
```c++
#include <Servo.h>

Servo myservo;  // create servo object to control a servo
// twelve servo objects can be created on most boards

int pos = 0;    // variable to store the servo position

void setup() {
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {
  for (pos = 0; pos <= 90; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15ms for the servo to reach the position
  }
  for (pos = 90; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservo.write(pos);              // tell servo to go to position in variable 'pos'
    delay(1);                       // waits 15ms for the servo to reach the position
  }
}
```
## Part C. Integrating input and output 
[Code](https://github.com/Konstantinos-KK/IDD-Fa19-Lab4/blob/master/sweep_analog.ino)  
[Video](https://youtu.be/LWQdxDMLRC8)

**Include a photo/movie of your raw circuit in action.**

## Part D. Paper puppet

**a. Make a video of your proto puppet.**

## Part E. Make it your own

**a. Make a video of your final design.**
 
