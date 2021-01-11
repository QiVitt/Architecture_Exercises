#include <stdio.h>

int main( )
{
  int flag = 0;
  float number = 0;
  float average = 0;
  int num_counter = 0;

  while(flag==0)
  {
    printf("Inserire un numero: ");
    scanf("%f", &number);

    if(number==0) flag = 1;
    else
    {
      average = average + number;
      num_counter++;
    }
  }

  printf("La media calcolata e': %f", average/num_counter);

  return 0;
}