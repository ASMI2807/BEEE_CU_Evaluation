
// include the library code:
#include <LiquidCrystal.h>
// buttons pin
int b=6,b1=7,b2=8,b3=9;

//button state variable
int va,va1,va2,va3;

//counter
int count=0,press;

// initialize the library with the numbers of the interface pins
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

void setup() {
  // set up the LCD's number of columns and rows:
  lcd.begin(16, 2);
  //switch button
  pinMode(b,INPUT);
  pinMode(b1,INPUT);
  pinMode(b2,INPUT);
  pinMode(b3,INPUT);

}

void loop() {
  //reading buuton state 
  va=digitalRead(b);
  va1=digitalRead(b1);
  va2=digitalRead(b2);
  va3=digitalRead(b3);
  
  if(va==HIGH || va1==HIGH || va2==HIGH || va3==HIGH )
  {
    press=count++;
    delay(40);
  }
  //set cursor on LCD
  lcd.setCursor(0, 0);
    // Print a message to the LCD.
  lcd.print(press);

}
 