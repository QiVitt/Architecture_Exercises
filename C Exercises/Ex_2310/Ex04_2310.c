#include <stdio.h>

int main( )
{
  int A[5];
  int B[5];
  int C[5];
  int i = 0;
  int sum = 0;
  int max;
  int min;

  for(i=0; i<5; i++)
  {
    printf("Numero da inserire nell'array A: ");
    scanf("%d", &A[i]);
  }
  for(i=0; i<5; i++)
  {
    printf("Numero da inserire nell'array B: ");
    scanf("%d", &B[i]);
  }

  //Sum and multiply
  for(i=0; i<5; i++)
  {
    C[i] = A[i] + B[i];
    printf("%d ", C[i]);
  }
  
  printf("\n Separator \n");

  for(i=0; i<5; i++)
  {
    C[i] = A[i] * B[i];
    printf("%d ", C[i]);
  }

  printf("\n Separator \n");

  //Confronting
  for(i=0; i<5; i++)
  {
    if(A[i] > B[i]) C[i] = A[i];
    else C[i] = B[i];
    printf("%d ", C[i]);
  }

  printf("\n Separator \n");

  //Last request
  for(i=0; i<5; i++)
  {
    sum = sum + C[i];
    if(i==0)
    {
      max = C[i];
      min = C[i];
    }
    else
    {
      if(C[i] > max) max = C[i];
      if(C[i] < min) min = C[i];
    }
  }

  printf("La media ottenuta e': %d \n", sum/5);
  printf("Il valore massimo: %d \n", max);
  printf("Il valore minimo: %d", min);

  return 0;
}