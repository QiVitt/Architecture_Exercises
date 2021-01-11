#include <stdio.h>

//Considering 0 as numero primo - 1 numero non primo

int check_prime(int num, int var)
{
  if(num==1) return 0;
  if(var%num==0) return 1;
  else return check_prime(num-1, var);
}

int main( )
{
  int number;
  int somma_function = 0;
  int flag;

  printf("Inserire il numero: ");
  scanf("%d", &number);

  int temp = number;

  flag = check_prime(number-1, temp);
  if(flag==0) printf("Il numero inserito e' primo \n");
  else printf("Il numero inserito non e' primo \n");

  return 0;
}