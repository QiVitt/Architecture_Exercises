#include <stdio.h>
#include <stdlib.h>

void order(int v[], int dim);
void exchange(int *a, int *b);
void binary_research(int v[], int dim);

int main( )
{
  int dimension;
  int *a;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dimension);

  a = malloc(dimension*sizeof(int));

  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire nell'array: ");
    scanf("%d", &a[i]);
  }

  order(a, dimension);
  printf("\nArray ordinato correttamete\n\n");
  for(int i=0; i<dimension; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n\nSeparator\n\n");
  binary_research(a, dimension);

  return 0;
}

void order(int v[], int dim)
{
  for(int i=0; i<dim; i++)
  {
    if(i == dim-1)
    {
      if(v[i] > v[i+1]) exchange(&v[i], &v[i+1]);
    }
    else
    {
      if(i == dim);
      else
      {
        for(int j = i+1; j<dim; j++)
        {
          if(v[i] > v[j]) exchange(&v[i], &v[j]);
        }
      }
    }
  }
}

void exchange(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void binary_research(int v[], int dim)
{
  int sub_dimension = (dim/2);
  int flag = 0;
  for(int i=0; i<sub_dimension; i++)
  {
    flag = 0;
    for(int j = sub_dimension; j<dim; j++)
    {
      if(v[i] == v[j]) flag = 1;
    }

    if(flag == 1) printf("L'elemento in posizione %d \ne' presente nella seconda meta' dell'array. \n", i);
    else printf("L'elemento in posizione %d \nNon e' presente nella seconda meta' dell'array. \n", i);
  }
}



----------------------------------------------

//Recursive version not working

#include <stdio.h>
#include <stdlib.h>

void order(int v[], int dim);
void exchange(int *a, int *b);
void recursive_bresearch(int v[], int dim);

int main( )
{
  int dimension;
  int *a;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dimension);

  a = malloc(dimension*sizeof(int));

  for(int i=0; i<dimension; i++)
  {
    printf("Numero da inserire nell'array: ");
    scanf("%d", &a[i]);
  }

  order(a, dimension);
  printf("\nArray ordinato correttamete\n\n");
  for(int i=0; i<dimension; i++)
  {
    printf("%d ", a[i]);
  }
  printf("\n\nSeparator\n\n");
  recursive_bresearch(a, dimension);

  return 0;
}

void order(int v[], int dim)
{
  for(int i=0; i<dim; i++)
  {
    if(i == dim-1)
    {
      if(v[i] > v[i+1]) exchange(&v[i], &v[i+1]);
    }
    else
    {
      if(i == dim);
      else
      {
        for(int j = i+1; j<dim; j++)
        {
          if(v[i] > v[j]) exchange(&v[i], &v[j]);
        }
      }
    }
  }
}

void exchange(int *a, int *b)
{
  int temp;
  temp = *a;
  *a = *b;
  *b = temp;
}

void recursive_bresearch(int v[], int dim)
{
  int flag = 0;
  if(dim == 0) return;
  else
  {
    for(int i=0; i<dim/2; i++)
    {
      flag = 0;
//      for(int j=dim/2; j<dim; j++)
//      {
//        if(v[i] == v[j]) flag = 1;
//      }
      if(v[i] == v[dim]) flag = 1;

      if(flag == 1) printf("L'elemento in posizione %d \ne' presente nella seconda meta' dell'array. \n", i);
      else
      {
        printf("L'elemento in posizione %d \nNon e' presente nella seconda meta' dell'array. \n", i);
        return recursive_bresearch(v, dim-1);
      } 
    }
  }
}