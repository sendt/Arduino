#include <LiquidCrystal.h>
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);  //bunlar standart 
void setup() {
lcd.begin(16, 2);  
//lcd panelimizin 2X16 olduğunu belirttik
lcd.print("BAYRAM AYDIN");
lcd.setCursor(0,1);  //ile lcdnin bir alt satırını kullanacağız
                    //1 ile alt satıra geç 0 ile sağ a kay 
lcd.print("13260015");                    

}
//şimdilik yazı yazmak için loop a gerek yok
void loop() {

}
