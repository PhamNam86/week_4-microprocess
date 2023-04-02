#include <LiquidCrystal_I2C_Hangul.h>


LiquidCrystal_I2C_Hangul lcd(0x3F, 16, 2);
//LiquidCrystal_I2C_Hangul lcd1(0x27, 16, 2);
int count;
void program_int()
{
  count++;
  
  }
void setup() {
  lcd.init();
  lcd.backlight();
  
 /* 
  lcd1.init();
  lcd1.backlight();*/
  pinMode(2,INPUT);
  attachInterrupt(0 ,program_int, FALLING);
  count=0;
 // pinMode(11,OUTPUT);
pinMode(5,OUTPUT);
}

void loop() {
  
//analogWrite(11,255/4);
 analogWrite(5,255/4);

    /*if(digitalRead(2)==0)
  {
    //count++;
    }*/
  lcd.setCursor(3,1);
  lcd.print(String(count));
  delay(500);
  
  /*lcd.setCursor(3,0);
  lcd.print("Hello World");
  lcd.setCursor(3,1);
  lcd.print("ICE2018A");*/
  /*lcd1.setCursor(3,0);
  lcd1.print("Thai Binh");
  lcd1.setCursor(3,1);
  lcd1.print("Ha Noi");
*/


}
