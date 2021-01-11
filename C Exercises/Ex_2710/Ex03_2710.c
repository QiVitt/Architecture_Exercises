#include <stdio.h>

//Considering n as n >= 0

int main( )
{
  int dimension;
  
  printf("Dimensione da assegnare all'array: ");
  scanf("%d", &dimension);

  int A[dimension];
  int n;
  int min_diff;

  printf("Value da assegnare ad n: ");
  scanf("%d", &n);

  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire nell'array: ");
    scanf("%d", &A[i]);
  }

  //Ricerca del valore piu' vicino in modulo
  for(int i=0; i<dimension; i++)
  {
    if(i==0)
    {
      if(A[i] <= 0) A[i] = A[i]*(-1);
      if(A[i] > n) min_diff = A[i] - n;
      else min_diff = n - A[i];
    }
    else
    {
      if(A[i] <= 0) A[i] = A[i]*(-1);
      if(A[i] > n)
      {
        if(min_diff > A[i]-n) min_diff = A[i]-n;
      }
      else
      {
        if(min_diff > n-A[i]) min_diff = n-A[i];
      }
    }
  }

  printf("La differenza piu' vicina in modulo e': %d", min_diff);

  return 0;
}