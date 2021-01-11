#include <stdio.h>

int recursive_sum(int n)
{
  if(n==0) return 0;
  else return n+recursive_sum(n-1);
}

int main( )
{
  int number;
  int number_sum;

  printf("Inserire il numero per il quale calcolare la serie somma: ");
  scanf("%d", &number);

  number_sum = recursive_sum(number);

  printf("Somma attesa: %d", number_sum);

  return 0;
}