#include <stdio.h>

int potenza(int base, int esponente);

int main( )
{
  int a, b;
  int value;

  printf("Inserire la base: ");
  scanf("%d", &a);
  printf("Inserire l' esponente: ");
  scanf("%d", &b);
  
  value = potenza(a,b);
  printf("Il risultato e': %d", value);

  return 0;
}

int potenza(int base, int esponente)
{
  int risultato = 1;
  for(int i=0; i<esponente; i++)
  {
    risultato = risultato*base;
  }
  return risultato;
}