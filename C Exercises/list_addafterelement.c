#include <stdio.h>
#include <stdlib.h>

struct node
{
  int value;
  struct node *link;
} ;

struct node *root = NULL;

void addafter(int v);
void add_after_element(int x, int v);

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

  add_after_element(5, 6);

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

void add_after_element(int x, int v)
{
  struct node *temp;
  struct node *p = root;
  int flag = 0;

  if(p == NULL) printf("Bisogna prima inserire elementi nella lista.\n");
  else
  {
    while((*p).link != NULL)
    {
      if( (*p).value == x ) flag = 1;

      p = (*p).link;
    }

    if(flag == 1)
    {
      struct node *follow;
      temp = malloc(sizeof(struct node));

      (*temp).value = v;

      p = root;
      
      while((*p).value != x)
      {
        p = (*p).link;
      }

      follow = (*p).link;
      (*temp).link = follow;
      (*p).link = temp;
    }
    else printf("L'elemento richiesto non e' presente nella lista");
  }
}