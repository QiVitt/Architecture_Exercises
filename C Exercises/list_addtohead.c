

//Add on head of a list

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *link;
} ;

struct node *root = NULL;

void add_head(int v);

int main( )
{
  int dimension;
  int valore;

  printf("Quanti valori deve contenere la lista? ");
  scanf("%d", &dimension);

  for(int i=0; i<dimension; i++)
  {
    printf("Valore da inserire in testa alla lista: ");
    scanf("%d", &valore);
    add_head(valore);
  }

  printf("\nValori inseriti correttamente, stampa della lista in corso:\n\n");

  struct node *z = root;

  while((*z).link != NULL)
  {
    printf("%d ", (*z).value);

    z = (*z).link;
  }

  printf("%d", (*z).value); //Printing last element

  return 0;
}

void add_head(int v)
{
  struct node *temp;
  temp = malloc(sizeof(struct node));

  if(root == NULL)
  {
    (*temp).value = v;
    root = temp;
    (*temp).link = NULL;
  }
  else
  {
    (*temp).value = v;
    (*temp).link = root;
    root = temp;
  }
}