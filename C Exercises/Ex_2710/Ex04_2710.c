#include <stdio.h>

int recursive_factorial(int v)
{
  if (v == 0) return 1;
  else return v * recursive_factorial(v-1);
}

int main( )
{
  int A[10];
  int i = 0;

  for(i=0; i<10; i++)
  {
    printf("Numero da inserire nell'array: ");
    scanf("%d", &A[i]);
  }

  for(i=0; i<10; i++)
  {
    A[i] = recursive_factorial(A[i]);
    printf("%d ", A[i]);
  }

  return 0;
}