#include <stdio.h>

int main( ) 
{
  int number = 0;
  int previous = 0;
  int following = 0;

  printf("Insert value: ");
  scanf("%d", &number);

  previous = number - 1;
  following = number + 1;

  printf("Previous value is: %d \n", previous);
  printf("Following value is: %d", following);

  //printf("Previous value is: %d \n", number-1);
  //printf("Following value is: %d", number+1);

  return 0;
}
