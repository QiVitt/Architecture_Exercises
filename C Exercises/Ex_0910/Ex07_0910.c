#include <stdio.h>

int main( )
{
  float first_number = 0;
  float second_number = 0;
  float sum = 0;
  float abs_sum = 0;

  printf("Insert first number value: ");
  scanf("%f", &first_number);
  printf("Insert second number value: ");
  scanf("%f", &second_number);

  if(second_number >= 0)
  {
    printf("Il secondo numero inserito e' positivo \n");
  }
  else
  {
    printf("Il secondo numero inserito e' negativo \n");
  }

  if((int) first_number%2 == 0)
  {
    printf("Il primo numero inserito è pari \n");
  }
  else
  {
    printf("Il primo numero inserito è dispari \n");
  }

  sum = first_number + second_number;
  printf("La somma dei due numeri è: %f \n", sum);

  if(first_number >= 0) printf("Il segno del primo numero risulta corretto \n");
  else printf("Il segno del primo numero risulta errato \n");
  if(second_number >= 0) printf("Il segno del secondo numero risulta corretto \n");
  else printf("Il segno del secondo numero risulta errato \n");

  if((first_number < 0)&&(second_number < 0))
  {
    abs_sum = (first_number*(-1)) + (second_number*(-1));
  }
  if((first_number >= 0)&&(second_number >= 0))
  {
    abs_sum = sum;
  }
  if((first_number >= 0)&&(second_number < 0))
  {
    abs_sum = first_number + (second_number*(-1));
  }
  if((first_number < 0)&&(second_number >= 0))
  {
    abs_sum = (first_number*(-1)) + second_number;
  }

  printf("Il valore massimo della somma e': %f \n", abs_sum);

  return 0;
}