//Led is connected at digital pin 9
int ledPin = 9;

//delay time for the program to allow time for adjusting and reading from potentiometer
int delay_time = 100;
//declare the value red from the analogRead and the converted value to be written to the led
int readVal;
float realVal;

// The analogRead pin is connected at A0
int readPin = A0;
void setup() {

  // ledPin is an output pin while readPin is an input pin
  pinMode(ledPin, OUTPUT);
  pinMode(readPin,INPUT);
  Serial.begin(9600);
}

void loop() {

  //Read the value from the potentiometer
  readVal = analogRead(readPin);
  
  //Write the read value to the led
  analogWrite(ledPin, readVal*(255./1023.));
  delay(delay_time);

}
