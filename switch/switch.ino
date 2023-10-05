//button connected at pin 9 and an led to be turned on connected at pin 8
int ledPin = 8;
int buttonPin = 9;

// variable to keep track on state of button (pressed or not)
int buttonState;

void setup() {

  // Button is an input and the led is an ouput
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {

  // Track state of button 
  buttonState = digitalRead(buttonPin);

  // turn the led on if the button is pressed and turn it off if the button is released
  if(buttonState == 1) {
    digitalWrite(ledPin, LOW);
  } else {
    digitalWrite(ledPin, HIGH);
  }
  

}
