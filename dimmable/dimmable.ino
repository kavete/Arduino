// The led is connected to digital pin 5
int ledPin = 5;

//The buttons are connected to digital pins 9 and 10
int button1 = 9;
int button2 = 10;

//Buzzer is connected to pin 8
int buzzPin = 8;

//Initial state of buttons at rest is 1 as there is a voltage of 5 volts when the button is not being pushed
int buttonVal1 = 1;
int buttonVal2 = 1; 

//Start with the led completely turned off
int ledBright = 0;

//delay times for writing the read value to the led 
int dt = 100;
int db = 100;
void setup() {

  // the led  and the buzzer are output
  pinMode(ledPin, OUTPUT);
  pinMode(buzzPin, OUTPUT);
  
  //button 1 and button 2 are inputs
  pinMode(button1, INPUT);
  pinMode(button2, INPUT);
  
}

void loop() {
  // Continuosly check whether the  buttons are pressed. If pressed, the value should change to a 0
  buttonVal1 = digitalRead(button1);
  buttonVal2 = digitalRead(button2);

  // if button 1 is pressed, increase the led brightness by a factor of 5
  if (buttonVal1 == 0) {
    ledBright = ledBright + 5;
    delay(db);
  }
  
  // if button 2 is pressed, decrease the led brightness by a factor of 5
  if (buttonVal2 == 0) {
    ledBright = ledBright - 5;
    delay(db);
  }
  
  // If the ledbrightness exceeds 255, reset it to 255 and alert the user with the buzzer
  if (ledBright>255) {
    ledBright = 255;
    digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin,LOW);
  }
  
  //If the ledbrightness becomes less than 0, reset it to 0 and alert the user with a buzzer
  if (ledBright < 0) {
    ledBright = 0;
     digitalWrite(buzzPin, HIGH);
    delay(dt);
    digitalWrite(buzzPin,LOW);
  }
  
  //Increase or decrease the led brightness as the buttons are pressed
  analogWrite(ledPin, ledBright);
}
