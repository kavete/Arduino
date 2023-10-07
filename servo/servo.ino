// Include the servo library
#include <Servo.h>

// Sevo control pin connected to pin 10
int servoPin = 10;

// Start the servo at angle 0 
int position = 0;

// Create myServo object
Servo myServo;

void setup() {

  // Attach the servo to pin 9
  myServo.attach(servoPin);

  // Initiate serial monitor with a baud rate of 9600
  Serial.begin(9600);

}

void loop() {

  // Reset the position to zero everytime the program starts
  myServo.write(position);
  
  // Ask user for angle
  Serial.println("Enter desired servo angle");
  
  // Wait until a value is entered
  while (Serial.available() == 0) {

   }

  // Assign entered value to position variable
  // This method requires No line Ending setting to be enable in the serial monitor
  // ***** position = Serial.parseInt(); ***** //

  //  Alternative for parseInt() This doesn't require extra settings in the Serial monitor
  position = Serial.readString().toInt();

  // Reset the values to 180 if the value entered exceeds 180 
  if (position > 180) {
     position = 180;
   }

  // Reset the value to 0 if the value entered is less than 0
  if (position < 0) {
     position = 0;
   }

   // write the angle to the servo
   myServo.write(position);

}
