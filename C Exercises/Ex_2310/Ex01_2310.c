#include <stdio.h>

void ordening(int *a, int *b, int *c, int *d);
//Order as a <= b <= c <= d
void simple_opposite(int *p, int *q);

int main( )
{
  int first, second, third, fourth;

  printf("Inserire il primo numero: ");
  scanf("%d", &first);
  printf("Inserire il secondo numero: ");
  scanf("%d", &second);
  printf("Inserire il terzo numero: ");
  scanf("%d", &third);
  printf("Inserire il quarto numero: ");
  scanf("%d", &fourth);

  ordening(&first, &second, &third, &fourth);

  printf("I numeri in ordine crescente: \n");
  printf("%d %d %d %d", first, second, third, fourth);

  return 0;
}

void ordening(int *a, int *b, int *c, int *d)
{
  if(*a>=*b) simple_opposite(a, b);
  if(*a>=*c) simple_opposite(a, c);
  if(*a>=*d) simple_opposite(a, d);

  if(*b>=*c) simple_opposite(b, c);
  if(*b>=*d) simple_opposite(b, d);

  if(*c>=*d) simple_opposite(c, d);
}

void simple_opposite(int *p, int *q)
{
  int tmp;
  tmp = *p;
  *p = *q;
  *q = tmp;
}