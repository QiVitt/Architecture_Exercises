#include <stdio.h>

int main( ) 
{
  int first_number = 0;
  int second_number = 0;
  int sum = 0;
  int average = 0;

  printf("First number: ");
  scanf("%d", &first_number);
  printf("Second number: ");
  scanf("%d", &second_number);

  sum = first_number + second_number;
  average = (first_number + second_number) / 2;

  printf("Sum of the numbers: %d \n", sum);
  printf("Average of the numbers: %d", average);

  return 0;
}