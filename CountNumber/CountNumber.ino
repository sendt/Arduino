int a = 2; // Pinleri tanımlıyoruz
int b = 3;
int c = 4;
int d = 5;
int e = 6;
int f = 7;
int g = 8;
int i=0;
int j=0;
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
}
void loop() {
for(i=0;i<10;i++){
  for(j=0;j<7;j++)
  {
    digitalWrite(ardiuno_pinler[j],sayilar[i][j]);
  }
  delay(500);
  if(i==9)
  {
    i=0;
  }
}
} 
