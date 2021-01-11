#include <stdio.h>

int main( )
{ 
  //DO NOT DECLARE LIKE THIS - JUST AN EXAMPLE
  int dimension;

  printf("Inserire la dimensione degli array: ");
  scanf("%d", &dimension);

  int A[dimension];
  int B[dimension];

  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire all'interno del primo Array: ");
    scanf("%d", &A[i]);
  }
  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire all'interno del secondo Array: ");
    scanf("%d", &B[i]);
  }

  printf("\n Separator \n ");

  for(int i=0; i<dimension; i++)
  {
    printf("%d ", A[i]*B[i]);
  }

  return 0;
}