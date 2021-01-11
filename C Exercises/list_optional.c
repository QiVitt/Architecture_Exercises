//Programmare una lista di array - una lista dove
// al posto del campo info all'interno di lista ci sono 
//un valore intero che indica la grandezza dell'array e 
//un puntatore che punta ad una zona dello heap
//dove e' presente un array di quella dimensione

#include <stdio.h>
#include <stdlib.h>

struct Array_list
{
  int dim;
  int *link;
} ;

int main( )
{
  int dimension;

  printf("Inserire la dimensione della lista di array: ");
  scanf("%d", &dimension);

  struct Array_list *pointer;

  pointer = malloc(dimension*sizeof(struct Array_list));

  for(int i=0; i<dimension; i++)
  {
    printf("Quanto deve essere grande l'array in posiz. %d : ", i);
    scanf("%d", &pointer[i].dim);

    pointer[i].link = malloc(pointer[i].dim*sizeof(int));
    
    for(int j=0; j<pointer[i].dim; j++)
    {
      printf("Numero da inserire all'interno del %d array: ", j);
      scanf("%d", &pointer[i].link[j]);
    }
  }

  printf("\nInserimento effettuato correttamente - Next Printing:\n");

  for(int i=0; i<dimension; i++)
  {
    for(int j=0; j<pointer[i].dim; j++)
    {
      printf("%d ", pointer[i].link[j]);
    }
    printf("\n");
  }

  return 0;
}