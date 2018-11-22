#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //bunlar standart 

void setup() {
lcd.begin(16, 2);   
//lcd panelimizin 2X16 olduğunu belirttik
lcd.print("BAYRAM AYDIN");
lcd.setCursor(0,1);
lcd.print("13260015");
}

void loop() {

//lcd.noDisplay();
//delay(500);
//lcd.Display();  bu kodlarla beraber yazımız belirli aralıklarla
//ekranda yanıp sönecektir.
}
