#include <stdio.h>
#include <stdlib.h>

struct triangolo
{
  float lato1, lato2, lato3;
  float angolo1, angolo2, angolo3;
} ; 

float calcolo_perimetro(struct triangolo *p);
void similitudine(struct triangolo t1, struct triangolo *t2);

int main( )
{
  struct triangolo first;
  struct triangolo second;
  float perimetro1 = 0;
  float perimetro2 = 0;

  printf("Inserire i valori dei lati per il primo triangolo: ");
  scanf("%f %f %f", &first.lato1, &first.lato2, &first.lato3);
  printf("Inserire i valori degli angoli per il primo triangolo:");
  scanf("%f %f %f", &first.angolo1, &first.angolo2, &first.angolo3);
  
  printf("Inserire i valori dei lati per il secondo triangolo: ");
  scanf("%f %f %f", &second.lato1, &second.lato2, &second.lato3);
  printf("Inserire i valori degli angoli per il secondo triangolo:");
  scanf("%f %f %f", &second.angolo1, &second.angolo2, &second.angolo3);
  
  perimetro1 = calcolo_perimetro(&first);
  printf("Il perimetro del primo triangolo e': %f \n", perimetro1);

  perimetro2 = calcolo_perimetro(&second);
  printf("Il perimetro del secondo triangolo e': %f \n", perimetro2);

  similitudine(first, &second);

  return 0;
}

float calcolo_perimetro(struct triangolo *p)
{
  return (*p).lato1 + (*p).lato2 + (*p).lato3;
}

void similitudine(struct triangolo t1, struct triangolo *t2)
{
  if ((t1.lato1/ (*t2).lato1 == t1.lato2/ (*t2).lato2)&&(t1.lato1/ (*t2).lato1 == t1.lato3/ (*t2).lato3)) printf("0 - I due triangoli sono simili");
  else printf("1 - I due triangoli Non sono simili");
}