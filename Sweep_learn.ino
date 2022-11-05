// this is a test to see if this shows up on git hub

#include <Servo.h>


Servo myservofl;
Servo myservofr;
Servo myservorr;
Servo myservorl;

int led = 0;
# define led A5
# define ledred 3
# define laser 4
long randNumber;
int pos = 0;    // variable to store the servo position

void setup() {

  Serial.begin(9600);
    Serial.println("Serial OK");
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(ledred, OUTPUT);
    pinMode(laser, OUTPUT);
  digitalWrite(ledred, LOW);
  myservofl.attach(5);  // attaches the servo on pin 9 to the servo object
 myservofr.attach(6);
 myservorr.attach(9);
 myservorl.attach(10);
}

void loop() {
for (pos = 0; pos <= 180; pos += 1) { // goes from 0 degrees to 180 degrees
    // in steps of 1 degree
    myservorr.write(pos);              // tell servo to go to position in variable 'pos'
  myservorl.write(pos); 
  myservofr.write(pos); 
   myservofl.write(pos); 
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
  for (pos = 180; pos >= 0; pos -= 1) { // goes from 180 degrees to 0 degrees
    myservorr.write(pos);              // tell servo to go to position in variable 'pos'
  myservorl.write(pos); 
  myservofr.write(pos); 
   myservofl.write(pos); 
    delay(15);                       // waits 15 ms for the servo to reach the position
  }
    myservorr.write( 0);              // tell servo to go to position in variable 'pos'
  myservorl.write(0); 
  myservofr.write(0); 
   myservofl.write(0);  
   delay(5000);
}