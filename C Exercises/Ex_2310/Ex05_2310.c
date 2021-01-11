#include <stdio.h>

//Flag 0 if palindromo, 1 if not palindromo
int main( )
{
  int A[10];
  int B[10];
  int i = 0;
  int last = 9;
  int flag = 0;

  for(i=0; i<10; i++)
  {
    printf("Inserire un valore all'interno dell'array: ");
    scanf("%d", &A[i]);
  }

  for(i=0; i<10; i++)
  {
    B[i] = A[last];
    last = last - 1;
  }

  //check if palindromo
  for(i=0; i<10; i++)
  {
    if(A[i] != B[i]) flag = 1;
  }

  if(flag == 0) printf("L'array inserito e' palindromo \n");
  else printf("L'array inserito Non e' palindromo \n");

  return 0;
}