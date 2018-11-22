const int ledPin=2;
const int buttonPin=4;
int buttondurum=0;


void setup() {
  // put your setup code here, to run once:
//Serial.begin(96000);
pinMode(ledPin, OUTPUT);
pinMode(buttonPin, INPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
buttondurum=digitalRead(buttonPin); // get the state of button
if(buttondurum==HIGH){  //check the buttun state(basılmıssa)
  digitalWrite(ledPin, LOW); // led i yak
//  Serial.println("LED YANDİ++++++++++");   //led is turn on
}
else{
  digitalWrite(ledPin, HIGH);  //else, led turn off
//  Serial.println("LED sondu+++++++++++"); // led turn off
}
}
