//Convert an array to a list
//viceversa to do 

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *link;
} ;

struct node *root = NULL;

void addafter(int v);

int main( )
{
  int dimension;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dimension);

  int *a;

  a = malloc(dimension*sizeof(int));

  for(int i=0; i<dimension; i++)
  {
    printf("Valore da inserire nell'array: ");
    scanf("%d", &a[i]);
  }

  for(int i=0; i<dimension; i++)
  {
    addafter(a[i]);
  }

  struct node *z = root;

  while((*z).link != NULL)
  {
    printf("%d ", (*z).value);

    z = (*z).link;
  }

  printf("%d \n", (*z).value);  //Printing last element

  printf("\nSuccessfully converted to list with head = root\n");

  return 0;
}

void addafter(int v)
{
  struct node *temp;
  
  temp = malloc(sizeof(struct node));

  (*temp).value = v; 

  if(root == NULL)
  {
    root = temp;
    (*temp).link = NULL;
  }
  else
  {
    struct node *p = root;

    while((*p).link != NULL)
    {
      p = (*p).link;
    }

    (*p).link = temp;
    (*temp).link = NULL;
  }
}

--------------------------------

CHECK THIS :

//Convert an array to a list and viceversa

//Why does it not work?

//N.B AVENDO DEFINITO LA STRUTTURA NELLA FUNZIONE SULLO STACK FRAME
//QUESTA VIENE ALLOCATA IN AMBIENTE-MEMORIA \ NON SULLO HEAP , 
//VENGONO SVOLTE TUTTE LE OPERAZIONI NELLA FUNCTION
//QUINDI L'INTERO PROCEDIMENTO/L'INTERA STRUTTURA VIENE CANCELLATA

//-> L'unica modifica valida risulta quella presente alla line 155
//risultante la modifica al valore contenuto.

#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *link;
} ;

struct node *root = NULL;

void addafter(int v);

int main( )
{
  int dimension;

  printf("Inserire la dimensione dell'array: ");
  scanf("%d", &dimension);

  int *a;

  a = malloc(dimension*sizeof(int));

  for(int i=0; i<dimension; i++)
  {
    printf("Valore da inserire nell'array: ");
    scanf("%d", &a[i]);
  }

  for(int i=0; i<dimension; i++)
  {
    addafter(a[i]);
  }

  struct node *z = root;

  while((*z).link != NULL)
  {
    printf("%d ", (*z).value);

    z = (*z).link;
  }

  printf("%d \n", (*z).value);  //Printing last element

  printf("\nSuccessfully converted to list with head = root\n");

  return 0;
}

void addafter(int v)
{
  struct node temp;
  
//  temp = malloc(sizeof(struct node));

  temp.value = v; 

  printf("%p \n", root);

  if(root == NULL)
  {
    root = &temp;
    temp.link = NULL;
  }
  else
  {
    struct node *p = root;

    while((*p).link != NULL)
    {
      p = (*p).link;
    }

    (*p).link = &temp;
    temp.link = NULL;
  }
}