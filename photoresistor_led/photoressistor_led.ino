//Photoresistor connected to pin A0
int photoPin = A0;

//Led connected to pin 9
int ledPin = 9;

int resVal;
void setup() {
  
  // pin A0 is an input to monitor the resistance value
  // pin 9 is the led otput
  pinMode(photoPin, INPUT);
  pinMode(ledPin, OUTPUT);

}

void loop() {
  
  // turn on the led when the lights are switched off
  // turn off the led when the lights are turned on
  resVal = analogRead(photoPin);
  if (resVal < 400) {
    digitalWrite(ledPin, HIGH);
  } else {
    digitalWrite(ledPin, LOW);
  }

}
