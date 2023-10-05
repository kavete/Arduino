// Passive buzzer connected at digital pin 9
int passive = 9;

//Delay times fot the passive buzzer
int dt = 400;
int dt2 = 300;

void setup() {
  // The passive buzzer at pin 9 is an output
  pinMode(passive, OUTPUT);

}

void loop() {

  // Make a tone by turning the buzzer on and off
  digitalWrite(passive,HIGH);
  delayMicroseconds(dt2);
  digitalWrite(passive,LOW);
  delayMicroseconds(dt);
  
}
