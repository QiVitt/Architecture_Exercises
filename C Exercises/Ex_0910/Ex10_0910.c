#include <stdio.h>

int main( )
{
  int N;
  int max;
  int min;
  float number;

  printf("Number of n to process: ");
  scanf("%d", &N);

  for(int i=0; i<N; i++)
  {
    printf("Inserire un numero: ");
    scanf("%f", &number);

    if(i==0)
    {
      max = number;
      min = number;
    }

    if(number>max) max = number;
    if(number<min) min = number;
  }

  printf("Il numero massimo inserito e': %d \n", max);
  printf("Il numero minimo inserito e': %d", min);

  return 0;
}