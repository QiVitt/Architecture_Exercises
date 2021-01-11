#include <stdio.h>

int mcd_definer(int a, int b)
{
  if(a==b) return a;
  else
  {
    if(a>b) return mcd_definer(a-b, b);
    else return mcd_definer(a, b-a);
  }
}

int main( )
{
  int first;
  int second;
  int mcd;

  printf("Inserire il primo numero: ");
  scanf("%d", &first);
  printf("Inserire il secondo numero: ");
  scanf("%d", &second);

  mcd = mcd_definer(first, second);
  printf("L' mcd calcolato e': %d", mcd);

  return 0;
}