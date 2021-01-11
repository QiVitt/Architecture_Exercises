#include <stdio.h>

int main( )
{
  int dim_a;
  int flag = 0;

  printf("Inserire la dimensione dei due array: ");
  scanf("%d", &dim_a);

  int a[dim_a];
  int b[dim_a];

  for(int i=0; i<dim_a; i++)
  {
    printf("Inserire un valore all'interno dell'array A: ");
    scanf("%d", &a[i]);
  }

  for(int i=0; i<dim_a; i++)
  {
    flag = 0; //Assuming number as prime

    for(int j=2; j<a[i]; j++)
    {
      if(a[i]%j == 0) flag = 1; //Number not prime
    }

    if(flag == 0) b[i] = a[i];
    else b[i] = 0;
  }

  for(int i=0; i<dim_a; i++)
  {
    printf("%d ", b[i]);
  }

  return 0;
}