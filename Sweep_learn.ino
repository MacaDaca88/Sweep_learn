#include <Servo.h>


Servo myservo;

int led = 0;
# define led A5
# define ledred 3
long randNumber;


void setup() {

  Serial.begin(9600);
    Serial.println("Serial OK");
  pinMode(led, OUTPUT);
  digitalWrite(led, LOW);
  pinMode(ledred, OUTPUT);
  digitalWrite(ledred, LOW);
  myservo.attach(9);  // attaches the servo on pin 9 to the servo object
}

void loop() {

randNumber = random(180);  

    
    delay(5);
      Serial.println(randNumber);
    if (randNumber > 140 ) {
      myservo.write(randNumber);
      digitalWrite(led, HIGH);
    }
      delay(1000);
 
          myservo.write(0);
    delay(5);
    if ( randNumber < 55 ) {
       myservo.write(0);
      digitalWrite(led, LOW);
    }
 
      delay(1000);
}