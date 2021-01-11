#include <stdio.h>

int recursive_factorial(int n)
{
  if(n==0) return 1;
  else return n*recursive_factorial(n-1);
}

int main( )
{
  int number;
  int number_fattoriale;

  printf("Inserire il numero per il quale calcolare il fattoriale: ");
  scanf("%d", &number);

  number_fattoriale = recursive_factorial(number);

  printf("Fattoriale atteso: %d", number_fattoriale);

  return 0;
}