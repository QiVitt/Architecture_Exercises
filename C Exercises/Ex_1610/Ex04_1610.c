#include <stdio.h>

int dec2bin(int number);

int main()
{
  int numero_decimale;
  int numero_binario;

  printf("Inserire il numero da convertire in binario: ");
  scanf("%d", &numero_decimale);

  numero_binario = dec2bin(numero_decimale);
  printf("Il numero convertito in binario e': %d", numero_binario);
  return 0;
}

int dec2bin(int number)
{
  int converted = 0;
  int resto;
  int val_posizionale = 1;

  while(number!=0)
  {
    resto = number % 2;
    converted = converted + (resto*val_posizionale);
    val_posizionale = val_posizionale*10;
    number = number / 2;
  }
  return converted;
}