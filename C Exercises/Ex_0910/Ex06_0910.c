#include <stdio.h>

int main( )
{
  float number = 0;

  printf("Insert number value: ");
  scanf("%f", &number);

  if(number >= 0)
  {
    printf("Il numero inserito e' positivo \n");
    printf("Valore Assoluto: %f", number);
  }
  else
  {
    printf("Il numero inserito e' negativo \n");
    printf("Valore Assoluto: %f", number*(-1));
  }

  return 0;
}