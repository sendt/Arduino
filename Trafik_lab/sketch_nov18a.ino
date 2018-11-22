int kirmizi=10;
int sari=9;
int yesil=8;
void setup() {
  // put your setup code here, to run once:
pinMode(kirmizi, OUTPUT);
pinMode(sari, OUTPUT);
pinMode(yesil, OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(kirmizi, HIGH);
digitalWrite(sari, LOW);
digitalWrite(yesil, LOW);
delay(2000);
digitalWrite(kirmizi, LOW);
digitalWrite(sari, HIGH);
digitalWrite(yesil, LOW);
delay(2000);
digitalWrite(kirmizi, LOW);
digitalWrite(sari, LOW);
digitalWrite(yesil, HIGH);
delay(3000);

}
