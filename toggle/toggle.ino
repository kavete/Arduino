// led  is connected at pin 8 and the button is connected at pin 9
int ledPin = 8;
int buttonPin = 9;

// The button starts at an "unpressed state'
int buttonOld = 1;

// led is initially off
int ledState =0;

// Variable to keep track  of the new state of button
int buttonNew;
void setup() {

  // led is an output and button an input
  pinMode(ledPin, OUTPUT);
  pinMode(buttonPin, INPUT);

}

void loop() {

  // continuously read new state of button
  buttonNew = digitalRead(buttonPin);

  // Change the state of the led  during the transition of the button from 0 to 1 (during the pressing)
  // During this transition, if the led was off turn it on and if it was off turn it on
  if(buttonNew == 1 && buttonOld == 0) {
    if(ledState == 0 ){
      digitalWrite(ledPin, HIGH);
      ledState = 1;
    } else {
      digitalWrite(ledPin, LOW);
      ledState = 0;
    }
   
  } 
  
  // After the whole process the value of buttonNew is now our buttonOld
  // We then read another value of buttonNew from the loop
 buttonOld = buttonNew;
 delay(10);
}
