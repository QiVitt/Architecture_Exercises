#include <stdio.h>

int sum_digits(int num)
{
  if(num==0) return 0;
  else return num%10 + sum_digits(num/10);
}

int main( )
{
  int number;
  int somma_function = 0;

  printf("Inserire il numero: ");
  scanf("%d", &number);

  somma_function = sum_digits(number);
  printf("La somma delle singole cifre del numero e': %d", somma_function);

  return 0;
}