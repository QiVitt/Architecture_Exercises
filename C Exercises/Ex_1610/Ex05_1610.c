#include <stdio.h>
#include <math.h>

int bin2dec(int number);

int main( )
{
  int numero_binario;
  int numero_decimale;

  printf("Inserire il numero da convertire in decimale: ");
  scanf("%d", &numero_binario);

  numero_decimale = bin2dec(numero_binario);
  printf("Il numero convertito in decimale e': %d", numero_decimale);
  
  return 0;
}

int bin2dec(int number)
{
  int remainder;
  int counter = 0;
  int converted = 0;

  while(number!=0)
  {
    remainder = number % 2;
    converted = converted + remainder*pow(2, counter);
    counter++;
    number = number / 10;
  }
  
  return converted;
}