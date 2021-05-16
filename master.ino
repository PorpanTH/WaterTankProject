

//Master 1
#include <Wire.h>
#include <LiquidCrystal.h>

int x = 0;
int y = 0;
int z = 0;
int a = 0;
int s = 0;

LiquidCrystal lcd(8, 9, 4, 5, 6, 7);

void setup() {
  lcd.begin(16, 2);
  Wire.begin();        // join i2c bus (address optional for master)
  Serial.begin(9600);

}


void loop() {
//Getting data from Slave 1
  Wire.requestFrom(1,1);   
  while (Wire.available()) { // slave may send less than requested
    x = Wire.read();
    //    Serial.print("Slave 8 ="); // receive a byte as character
    Serial.print("Tank 1 = < ");
    Serial.println(x);
    lcd.setCursor(0, 0);
    lcd.print("T1");
    lcd.setCursor(0, 1);
    lcd.print(x);

//  delay(2000);

  
 }
//From slave 2
    Wire.requestFrom(2,1);  
    while (Wire.available()) { // slave may send less than requested
   
    y = Wire.read();
    //Serial.print("Slave 8 ="); // receive a byte as character
  
      Serial.print("Tank 2 = < ");
      Serial.println(y);
     // print the character
    lcd.setCursor(3, 0);
    lcd.print("T2");
    lcd.setCursor(3, 1);
    lcd.print(y);
//    delay(2000);
//  lcd.clear();
 }
 
  //From Slave 3
    Wire.requestFrom(3,1);  
    while (Wire.available()) { // slave may send less than requested
      z = Wire.read();
      Serial.print("Tank 3 = < ");
      Serial.println(z);
     // print the character
      lcd.setCursor(6, 0);
      lcd.print("T3");
      lcd.setCursor(6, 1);
      lcd.print(z);
}
  
  //From Slave 4
  Wire.requestFrom(4,1);  
  while (Wire.available()) { // slave may send less than requested
//   
    a = Wire.read();

    Serial.print("Tank 4 = < ");
    Serial.println(a);
//     // print the character
    lcd.setCursor(9, 0);
    lcd.print("T4");
    lcd.setCursor(9, 1);
    lcd.print(a);
}
  
  //From Slave 5
  Wire.requestFrom(5,1);  
  while (Wire.available()) { // slave may send less than requested

    s = Wire.read();

    Serial.print("Tank 5 = < ");
    Serial.println(s);
    // print the character
    lcd.setCursor(12, 0);
    lcd.print("T5");
    lcd.setCursor(12, 1);
    lcd.print(s);
    }
    lcd.setCursor(15, 1);
    lcd.print("%");
}
