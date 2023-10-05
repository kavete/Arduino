//Photoresistor read jumper connected at analog pin A0 
int photoPin = A0;

//Value read from the photoresistor
int res;

//Program delay 
int dt = 1000;

void setup() {
  // Pin A0 is an input
  pinMode(photoPin, INPUT);
  
  //Initialize the serial monitor with a baud rate of 9600
  Serial.begin(9600);

}

void loop() {

  // Read the value from the photoresistor (Closely related to the resistance and hence the voltage into res
  res = analogRead(photoPin);
  
  //Print the value into the serial monitor
  Serial.println(res);
  delay(dt);

}
