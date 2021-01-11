#include <stdio.h>

void somma_armonica(int n, double *h);

int main( )
{
  int num;
  double result;
  int counter = 1;

  printf("Inserire il valore per il quale calcolare la s.a. : ");
  scanf("%d", &num);

  somma_armonica(num, &result);

  printf("Il valore atteso e': %lf", result);

  return 0;
}

void somma_armonica(int n, double *h)
{
  if (n==1) *h = 1;
  else
  {
    somma_armonica(n-1, h);

    *h = 1.0/n + *h;
  }
}