// led is connected to digital pin 9
int ledPin = 9;

void setup() {

  // The led is an output
  pinMode(ledPin, OUTPUT);
  
}

void loop() {

  // write an analog value to the led 
  // 128 is approximately half of 255 and hence the led will be half of its full brightness
 analogWrite(ledPin,128);
  
}
