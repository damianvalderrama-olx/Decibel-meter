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
