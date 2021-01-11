//Il risultato atteso per entrambi i programmi è il medesimo 
//Inserendo in input value n = 4 e cont = 5, 0, 1
//L'output generato è 400000, 4, 40

//Program 1
#include <stdio.h>

int main( )
{
  int conta, num;

  scanf("%d", &conta);
  scanf("%d", &num);

  while(conta!=0)
  {
    num = num*10;
    conta = conta-1;
  }

  printf("%d \n", num);

  return 0;
}

//Program 2
#include <stdio.h>

int main( )
{
  int conta, num;

  scanf("%d", &conta);
  scanf("%d", &num);

  while(conta>0)
  {
    num = num*10;
    conta = conta-1;
  }

  printf("%d \n", num);

  return 0;
}
