
// The leads of the RGB are connected to pin 9 (red) 10 (green) and 11 (blue)
int redPin = 9;
int greenPin = 10;
int bluePin = 11;


void setup() {

  // All the pins are outputs
  pinMode(redPin,OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin,OUTPUT);

}

void loop() {

  // Write the colors in rgb form rgb(255, 255, 255) should be white
  analogWrite(redPin, 255);
  analogWrite(greenPin, 255);
  analogWrite(bluePin, 255);
 
  delay(1000);

}
