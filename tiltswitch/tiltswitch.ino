// The tilt switch is connected to digital pin 2 of arduino the LEDs are connected to pin 4 and 6
int tiltSwitch = 2;
int tiltVal;
int redLed = 4;
int blueLed = 6;


void setup() {
  // The tilt switch is an input while the LEDs are outputs
  pinMode(tiltSwitch, INPUT);
  pinMode(redLed, OUTPUT);
  pinMode(blueLed, OUTPUT);

  // Make the switch on by default
  digitalWrite(tiltSwitch, HIGH);
}

void loop() {
  // Read the position by reading the tilt switch value. If tilted the value should be 0 (LOW)
  tiltVal = digitalRead(tiltSwitch);

  if (tiltVal == 0) {
    digitalWrite(blueLed, HIGH);
    digitalWrite(redLed, LOW);
  }

  if (tiltVal == 1) {
    digitalWrite(blueLed, LOW);
    digitalWrite(redLed, HIGH);
  }
}
