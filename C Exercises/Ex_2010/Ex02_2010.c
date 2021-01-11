#include <stdio.h>

int sum_and_product(int x, int y, int *z);

int main( )
{
  int first, second;
  int somma;
  int prodotto;

  printf("Inserire il primo numero: ");
  scanf("%d", &first);
  printf("Inserire il secondo numero: ");
  scanf("%d", &second);

  somma = sum_and_product(first, second, &prodotto);

  printf("La somma calcolata e': %d \n", somma);
  printf("Il prodotto calcolato e': %d", prodotto);

  return 0;
}

int sum_and_product(int x, int y, int *z)
{
  *z = x * y;
  return x + y;
}

//  Variante

#include <stdio.h>

int sum_and_product(int *x, int *y, int *z);

int main( )
{
  int first, second;
  int somma;
  int prodotto;

  printf("Inserire il primo numero: ");
  scanf("%d", &first);
  printf("Inserire il secondo numero: ");
  scanf("%d", &second);

  somma = sum_and_product(&first, &second, &prodotto);

  printf("La somma calcolata e': %d \n", somma);
  printf("Il prodotto calcolato e': %d", prodotto);

  return 0;
}

int sum_and_product(int *x, int *y, int *z)
{
  *z = *x * *y;
  return *x + *y;
}