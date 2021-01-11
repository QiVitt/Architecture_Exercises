#include <stdio.h>

int main( ) 
{
  float first_number = 0;
  float second_number = 0;  //Considering second_number!=0
  float sum = 0;
  float difference = 0;
  float multiplication = 0;
  float division = 0;

  printf("First number: ");
  scanf("%f", &first_number);
  printf("Second number: ");
  scanf("%f", &second_number);

  sum = first_number + second_number;
  //average = (first_number + second_number) / 2;
  if (first_number >= second_number)
  {
    difference = first_number - second_number;
  }
  else
  {
    difference = second_number - first_number;
  }
  multiplication = first_number * second_number;
  division = first_number/second_number;

  printf("Sum of the numbers: %f \n", sum);
  printf("Difference of the numbers: %f \n", difference);
  printf("Multiplication of the numbers: %f \n", multiplication);
  printf("Division of the numbers: %f \n", division);
  
  return 0;
}