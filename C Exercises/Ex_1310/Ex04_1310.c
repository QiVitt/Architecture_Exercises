#include <stdio.h>
#include <math.h>

double checker(double num1, double num2)
{
  int result;
  if(num1>num2)
  {
    if (num1-num2<=pow(10,-9)) result = 1;
    else result = 0;
  }
  else
  {
    if (num2-num1<=pow(10,-9)) result = 1;
    else result = 0;
  }
  return result;
}

int main( )
{
  double f_num, s_num;
  int risultato;
  printf("Inserire il primo numero: ");
  scanf("%lf", &f_num);
  printf("Inserire il secondo numero: ");
  scanf("%lf", &s_num);

  risultato = checker(f_num, s_num);
  printf("Il risultato ottenuto e' %d", risultato);

  return 0;
}