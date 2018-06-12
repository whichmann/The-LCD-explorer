#include <LiquidCrystal.h> // initialize the library with the numbers of the interface pins
LiquidCrystal lcd(0, 1, 8, 9, 10, 11); /// REGISTER SELECT PIN,ENABLE PIN,D4 PIN,D5 PIN, D6 PIN, D7 PIN

//Arduino pin numbers:
const int SW_pin = 2; // digital pin connected to switch output
const int X_pin = 0; // analog pin connected to X output
const int Y_pin = 1; // analog pin connected to Y output

void setup()

{
  lcd.begin(16, 2); // set up the LCD’s number of columns and rows
  //pinMode(SW_pin, INPUT);
  //digitalWrite(SW_pin, HIGH);
  Serial.begin(115200);
}

 

void loop()

{
//suggestion, the game will start after joystick is moved in any direction:
//set the cursor to column 0, line 1
//do
//{
    lcd.print("   Welcome");
    lcd.setCursor(0, 1); //set the cursor to column 0, line 2
    lcd.print("LCD explorer");//print name
    delay(450);//delay of 0.45sec
    lcd.scrollDisplayLeft();//shifting data on LCD
    lcd.setCursor(0, 0);// set the cursor to column 0, line1

    lcd.print("   Welcome");
    lcd.setCursor(0, 1); //set the cursor to column 0, line 2
    lcd.print("LCD explorer");//print name
    delay(450);//delay of 0.45sec
    lcd.scrollDisplayLeft();//shifting data on LCD
    lcd.setCursor(0, 0);// set the cursor to column 0, line1
    //Serial.print("X: ");
    //Serial.print(X_pin);
    //Serial.print(" | Y: ");
    //Serial.print(Y_pin);
    //analogRead(X_pin);
    //analogRead(Y_pin);
//} white (analogRead(X_pin) == 0 && analogRead(Y_pin) == 0)
}
