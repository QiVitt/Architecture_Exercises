#include <stdio.h>

int minimo(int first, int second, int third);

int main( )
{
  int a, b, c;
  int value;

  printf("Inserire il primo numero: ");
  scanf("%d", &a);
  printf("Inserire il secondo numero: ");
  scanf("%d", &b);
  printf("Inserire il terzo numero: ");
  scanf("%d", &c);

  value = minimo(a,b,c);
  printf("Il minimo e': %d", value);

  return 0;
}

int minimo(int first, int second, int third)
{
  int min;
  if ((first<=second)&&(first<=third)) min = first;
  if ((second<=first)&&(second<=third)) min = second;
  if ((third<=first)&&(third<=second)) min = third;

  return min;
}