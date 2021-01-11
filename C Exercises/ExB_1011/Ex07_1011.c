#include <stdio.h>
#include <stdlib.h>

int cxsum(int first_real, int first_immagin, int second_real, int second_immagin)
{
  return (first_real+second_real) + (first_immagin+second_immagin);
}

int cxprod(int first_real, int first_immagin, int second_real, int second_immagin)
{
  return ((first_real*second_real) - (first_immagin*second_immagin)) + ((first_real*second_immagin) + (first_immagin*second_real));
}

//Generic complex number x = a + i * b
struct complex_number
{
  int parte_reale;
  int parte_immaginaria;
} ; 

int main( )
{
  struct complex_number x;
  struct complex_number y;
  int somma_complex = 0;
  int prodotto_complex = 0;

  printf("Inserire la parte reale di x: ");
  scanf("%d", &x.parte_reale);
  printf("Inserire la parte immaginaria di x: ");
  scanf("%d", &x.parte_immaginaria);
  printf("Inserire la parte reale di y: ");
  scanf("%d", &y.parte_reale);
  printf("Inserire la parte immaginaria di y: ");
  scanf("%d", &y.parte_immaginaria);

  somma_complex = cxsum(x.parte_reale, x.parte_immaginaria, y.parte_reale, y.parte_immaginaria);
  prodotto_complex = cxprod(x.parte_reale, x.parte_immaginaria, y.parte_reale, y.parte_immaginaria);

  printf("La somma complessa computate e': %d \n", somma_complex);
  printf("Il prodotto complesso computato e': %d \n", prodotto_complex);

  return 0;
}

-----------------------

//Optional Implementation

#include <stdio.h>
#include <stdlib.h>

//Generic complex number x = a + i * b
struct complex_number
{
  int parte_reale;
  int parte_immaginaria;
} ; 

int cxsum(struct complex_number a[], int dim, int *z)
{
  int temp_real_adder = 0;
  int temp_imag_adder = 0;
  for(int i=0; i<dim; i++)
  {
    temp_real_adder += a[i].parte_reale;
    temp_imag_adder += a[i].parte_immaginaria;
  }
  *z = temp_imag_adder;
  return temp_real_adder;
}

int main( )
{
  int dimension = 0;

  printf("Dimensione della struttura di Array: ");
  scanf("%d", &dimension);
  
  struct complex_number v[dimension];
  int somma_complex_reale = 0;
  int somma_complex_immagin = 0;

  for(int i=0; i<dimension; i++)
  {
    printf("Inserire la parte reale di v[%d]: ", i);
    scanf("%d", &v[i].parte_reale);
    printf("Inserire la parte immaginaria di v[%d]: ", i);
    scanf("%d", &v[i].parte_immaginaria);
  }

  somma_complex_reale = cxsum(v, dimension, &somma_complex_immagin);

  printf("La somma complessa computate e': %d %d \n", somma_complex_reale, somma_complex_immagin);

  return 0;
}