//Buzzer connected to pin 8
int buzzPin = 8;

//delay variables for the buzzer
int dt = 100;
int dt2 = 80;

//delay for the program
int dt3 = 1000;
int i;

void setup() {
  // buzzPin (pin 8) is an output
  pinMode(buzzPin, OUTPUT);

}

void loop() {

  // during each iteration of loop() buzz 10 times repeatedly 
  for (i = 0; i<=10; i=i+1) {
  digitalWrite(buzzPin, HIGH);
  delay(dt);
  digitalWrite(buzzPin, LOW);
  delay(dt2);
   }
  // Turn the buzzer off, then delay for a second before looping through the loop again
  digitalWrite(buzzPin,LOW);
  delay(dt3);
    
}
