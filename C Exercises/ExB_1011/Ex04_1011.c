#include <stdio.h>
#include <stdlib.h>

int main( )
{
  int dim_a;
  int flag = 0;
  int counter = 0;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dim_a);

  int *a;
  int *b;

  a = malloc(dim_a*sizeof(int));
  b = malloc(dim_a*sizeof(int));

  for(int i=0; i<dim_a; i++)
  {
    printf("Inserire un valore all'interno dell'array A: ");
    scanf("%d", &a[i]);
  }

  //Resizing b to its correct dimension
  for(int i=0; i<dim_a; i++)
  {
    flag = 0; //Assuming number as prime

    for(int j=2; j<a[i]; j++)
    {
      if(a[i]%j == 0) flag = 1; //Number not prime
    }

    if(flag == 0) 
    {
      counter += 1;
      free( b );
      b = malloc(counter*sizeof(int));
    }
  }

  counter = 0;

  //Evenutally moving prime numbers from a to final b
  for(int i=0; i<dim_a; i++)
  {
    flag = 0;
    for(int j=2; j<a[i]; j++)
    {
      if(a[i]%j == 0) flag = 1; //Number not prime
    }

    if(flag == 0)
    {
      b[counter] = a[i];
      counter++;
    }
  }

  printf("\n Separator \n");
  
  for(int i=0; i<counter; i++)
  {
    printf("%d ", b[i]);
  }

  return 0;
}