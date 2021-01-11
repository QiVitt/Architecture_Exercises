#include <stdio.h>
#include <math.h>

float sconted(float price,int sale_percentage);

int main( )
{
  float prezzo_iniziale;
  int sconto_da_applicare;
  float prezzo_finale;

  printf("Inserire il prezzo iniziale dell'articolo: ");
  scanf("%f", &prezzo_iniziale);
  printf("Inserire il valore dello sconto da applicare: ");
  scanf("%d", &sconto_da_applicare);

  prezzo_finale = sconted(prezzo_iniziale, sconto_da_applicare);
  printf("Il prezzo finale risulta: %f", prezzo_finale);

  return 0;
}

float sconted(float price,int sale_percentage)
{
  float result;
  result = price - (price/100*sale_percentage);
  return result;
}