#include <DHT.h>
#include <Wire.h> 
#include <LiquidCrystal_I2C.h>
#define DHTPIN 7     // Digital pin connected to the DHT sensor
#define DHTTYPE DHT22   // DHT 22  (AM2302)

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 20, 4);

void setup() {
  Serial.begin(9600);
  Serial.println("DHT22 Humidity & temperature sensor\n");
  dht.begin();

  lcd.init();

  lcd.backlight();

  lcd.clear();
}

void loop() {
  // Wait a few seconds between measurements.
//  lcd.clear();
  delay(2000);

  // Reading temperature or humidity takes about 250 milliseconds!
  float humidity = dht.readHumidity();
  float temperature = dht.readTemperature();

  // Check if any reads failed and exit early (to try again).
  if (isnan(humidity) || isnan(temperature)) {
    Serial.println("Failed to read from DHT sensor!");
   
//    lcd.print("Could not read from sensor");
    return;
  }

  // Print temperature and humidity values.
  Serial.print("Humidity: ");
  Serial.print(humidity);
  Serial.print(" %\t");
  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

   // Print temperature and humidity values.
  lcd.setCursor(0,0);
  lcd.print("Humidity: ");
  lcd.print(humidity);
  lcd.print(" %");
  lcd.setCursor(0,2);
  lcd.print("Temperature: ");
  lcd.print(temperature);
  lcd.write(0xDF); 
  lcd.print("C");`
//  lcd.println(" °C");
  delay(1000);
}
