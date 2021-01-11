#include <stdio.h>

void interval_printer(int a, int b)
{
  if(a > b) return;
  else
  {
    printf("%d ", a);
    interval_printer(a+2, b);
  }
}

int main( )
{
  int sinistro;
  int destro;

  printf("Inserire il primo numero: ");
  scanf("%d", &sinistro);
  printf("Inserire il secondo numero: ");
  scanf("%d", &destro);

  interval_printer(sinistro, destro);
  
  return 0;
}