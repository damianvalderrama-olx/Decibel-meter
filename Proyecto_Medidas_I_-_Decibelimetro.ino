#include <LiquidCrystal.h>


LiquidCrystal lcd(7, 8, 9, 10, 11 , 12);

int potPin = A0;    // select the input pin for the potentiometer
int ledPin = 13;   // select the pin for the LED
int val = 0;       // variable to store the value coming from the sensor

void setup() { 

  pinMode(ledPin, OUTPUT);  // declare the ledPin as an OUTPUT
  Serial.begin(9600);
  banner();
}

void loop() {
  lcd.clear();
  lcd.setCursor(1,0);
  lcd.write("Voltage");
  val = analogRead(potPin);    // read the value from the sensor
  float voltage = 10 * log10(val * (5.0 / 1023.0)); 
  voltage = voltage + 1;
  lcd.setCursor(1,1);
  lcd.print(voltage,2); lcd.print(" V");
  Serial.println(voltage);
  digitalWrite(ledPin, HIGH);  // turn the ledPin on
  delay(val);                  // stop the program for some time
  digitalWrite(ledPin, LOW);   // turn the ledPin off
  delay(val);                  // stop the program for some time  
  }

void banner(){
  lcd.begin(16, 2);
  lcd.setCursor(0,0);
  lcd.write("PROYECTO MEDIDAS");
  lcd.setCursor(1,1);
  lcd.write("DECIBELIMETRO");
  delay(1000);
  for (int positionCounter = 0; positionCounter < 16; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(250);
  }
  lcd.clear();
  lcd.setCursor(22,2);
  lcd.write("VERSION 1.0");
  for (int positionCounter = 0; positionCounter < 34; positionCounter++) {
    // scroll one position right:
    lcd.scrollDisplayRight();
    // wait a bit:
    delay(250);
  }
}

 
