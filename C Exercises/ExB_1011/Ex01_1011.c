#include <stdio.h>
#include <stdlib.h>

int main( )
{
  int dim_a;
  int dim_b;
  int *a;
  int *b;
  int sommaelementsb = 0;
  int flag = 0;

  printf("Inserire la dimensione dell'array A: ");
  scanf("%d", &dim_a);
  printf("Inserire la dimensione dell'array B: ");
  scanf("%d", &dim_b);

  a = malloc(dim_a*sizeof(int));
  b = malloc(dim_b*sizeof(int));

  for(int i=0; i<dim_a; i++)
  {
    printf("Valore da inserire all'interno dell'array A: ");
    scanf("%d", &a[i]);
  }
  for(int i=0; i<dim_b; i++)
  {
    printf("Valore da inserire all'interno dell'array B: ");
    scanf("%d", &b[i]);
  }

  for(int i=0; i<dim_b; i++)
  {
    sommaelementsb += b[i];
  }

  for(int i=0; i<dim_a; i++)
  {
    if(a[i] == sommaelementsb)
    {
      flag = 1;
    }
  }

  if(flag == 1) printf("Esiste un valore nel primo array pari alla somma \ndegli elementi nel secondo. ");
  else printf("Non esiste il valore cercato. ");

  return 0;
}