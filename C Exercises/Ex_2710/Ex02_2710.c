#include <stdio.h>

void stampa_vettore(int V[], int dim)
{
  for(int i=0; i<dim; i++)
  {
    printf("%d ", V[i]);
  }
}

void exchange(int *v, int *v0)
{
  int tmp;
  tmp = *v0;
  *v0 = *v;
  *v = tmp;
}

int main( )
{
  int dimension;
  int min;
  int tmp = 0;

  printf("Inserire la dimensione degli array: ");
  scanf("%d", &dimension);

  int A[dimension];

  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire all'interno dell' Array: ");
    scanf("%d", &A[i]);
  }

  for(int i=0; i<dimension; i++)
  {
    if(i == 0) min = A[i];
    else
    {
      if(A[i] < min)
      {
        exchange(&A[i], &A[0]);
        min = A[0];
      }
    }
  }

  stampa_vettore(A, dimension);

  return 0;
}