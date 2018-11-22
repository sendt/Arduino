int a = 2; // Pinleri tanımlıyoruz
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int basamak_1=13;
int basamak_2=12;
int i=0;
int j=0;
int n=0;
int ardiuno_pinler[7]={a,b,c,d,e,f,g};
int sayilar[10][7]={
{1,1,1,1,1,1,0},   // 0 rakamını tanır, yazar, gösterir
{0,1,1,0,0,0,0},   // 1 rakamını tanır, yazar, gösterir
{1,1,0,1,1,0,1},   // 2 rakamını tanır, yazar, gösterir
{1,1,1,1,0,0,1},   // 3 rakamını tanır, yazar, gösterir
{0,1,1,0,0,1,1},   // 4 rakamını tanır, yazar, gösterir
{1,0,1,1,0,1,1},   // 5 rakamını tanır, yazar, gösterir
{1,0,1,1,1,1,1},   // 6 rakamını tanır, yazar, gösterir
{1,1,1,0,0,0,0},   // 7 rakamını tanır, yazar, gösterir
{1,1,1,1,1,1,1},   // 8 rakamını tanır, yazar, gösterir
{1,1,1,1,0,1,1},   // 9 rakamını tanır, yazar, gösterir

};

void setup()
{
pinMode(a, OUTPUT); // Pinlerin çıkış pini olduğunu belirtiyoruz.
pinMode(b, OUTPUT);
pinMode(c, OUTPUT);
pinMode(d, OUTPUT);
pinMode(e, OUTPUT);
pinMode(f, OUTPUT);
pinMode(g, OUTPUT);
pinMode(basamak_1, OUTPUT);
pinMode(basamak_2, OUTPUT);
}
void loop() {
for(i=0;i<10;i++){
  digitalWrite(basamak_1,0);
  digitalWrite(basamak_2,1);
  for(j=0;j<7;j++)
  {
    digitalWrite(ardiuno_pinler[j],sayilar[n][j]);
  }
  delay(500);
  digitalWrite(basamak_1,1);
  digitalWrite(basamak_2,0);
  for(j=0;j<7;j++){
    digitalWrite(ardiuno_pinler[j],sayilar[i][j]);
    }
    delay(500);
}
} 
