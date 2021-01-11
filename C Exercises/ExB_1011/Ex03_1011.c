#include <stdio.h>
#include <stdlib.h>

void exchange(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void order(int v[], int dim)
{
  int i = 0;
  for(i = 0; i<dim; i++)
  {
    if(v[i]!=0)
    {
      for(int j=0; j<i; j++)
      {
        if(v[j] == 0) exchange(&v[j], &v[i]);
      }
    }
  }
}

int main()
{
  int dimension;
  int past_dimension = 0;
  int *a;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dimension);

  a = malloc(dimension*sizeof(int));

  for(int i=0; i<dimension; i++)
  {
    printf("Valore da inserire all'interno dell'array: ");
    scanf("%d", &a[i]);
  }

  //Deleting the duplicates
  for(int i=0; i<dimension; i++)
  {
    if(i == dimension-1)
    {
      if(a[i] == a[i+1]) a[i+1] = 0;
    }
    else
    {
      if(i == dimension);
      else
      {
        for(int j = i+1; j<dimension; j++)
        {
          if(a[i] == a[j]) a[j] = 0;
        }
      }
    }
  }

  for(int i=0; i<dimension; i++)
  {
    printf("%d ", a[i]);
  }

  order(a, dimension);

  printf("\n Separator \n");

  for(int i=0; i<dimension; i++)
  {
    printf("%d ", a[i]);
  }

  printf("\n Separator \n");

  for (int i=0; i<dimension; i++)
  {
    if(a[i]!=0) past_dimension += 1;
  }
  for(int i=0; i<past_dimension; i++)
  {
    printf("%d ", a[i]);
  }

  return 0;
}