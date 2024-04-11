#include <Wire.h> 
#include <LiquidCrystal_I2C.h>

// Declare the operands and operator variables
int operand1;
int operand2;
char sign;
int result;
// Set the LCD address to 0x27 for a 20 chars and 4 line display
LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  // Initialize the LCD
  lcd.init();
  // Turn on the backlight
  lcd.backlight();
  // Clear any previous data that may have been displayed in the lcd
  lcd.clear();
  Serial.begin(9600);
}

void loop() {

Serial.println("This is a simple calculator");
// Get first operand from the serial monitor
Serial.println(" Enter the first operand");

while(Serial.available() == 0) {
  
}

lcd.clear();
operand1 = Serial.readString().toInt();

// get operator from the serial monitor
Serial.println(" Enter an operator ");

while(Serial.available() == 0) {
  
}

sign = Serial.read();

// Get the second operand 
Serial.println(" Enter the second operand");

while(Serial.available() == 0) {
  
}

operand2 = Serial.readString().toInt();

lcd.setCursor(0,0);
lcd.print(operand1);
lcd.print(sign);
lcd.print(operand2);
lcd.setCursor(0,1);
lcd.print("=");


// peform addition, subtraction and division depending on the operator
if (sign == '+') {
  result = operand1 + operand2;
} else if(sign =='-') {
  result = operand1 - operand2;
}else if(sign =='/') {
  result = operand1/operand2;
} else {
  lcd.setCursor(0,2);
  lcd.print("An error occured");
}

lcd.setCursor(0,2);
lcd.print(result);
result = 0;
delay(1000);
}
