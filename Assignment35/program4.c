#include<stdio.h>
#include<stdlib.h>

struct node 
{
  int data ;
  struct node* next ;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

void InsertFirst(PPNODE first, int no)
{
  PNODE newn = NULL;
  newn = (PNODE) malloc(sizeof(NODE));

  newn -> next = NULL;
  newn -> data = no;

  if(*first == NULL)
  {
    *first = newn;
  }
  else
  {
    newn->next = *first;
    *first = newn;
  }
}

int  SecMax(PNODE first)
{
  int iMax = 0, iSecMax = 0;
  iMax = first -> data;
  
  while (first != NULL)
  { 
    if(iMax < (first -> data))
    {
      iSecMax = iMax;
      iMax = first -> data;
    }
    first = first -> next;
  }
  return iSecMax;
}

void Display(PNODE first)
{
  while (first != NULL)
  {
    printf("| %d | -> ",first->data);
    first = first->next;
  }
  printf("NULL\n");
  
}
int main()
{
  PNODE head = NULL;
  int iRet = 0;
  InsertFirst(&head,89);
  InsertFirst(&head,6);
  InsertFirst(&head,41);
  InsertFirst(&head,17);
  InsertFirst(&head,28);
  InsertFirst(&head,11);
  Display(head);
  iRet = SecMax(head);
  printf("Second max  element of LL is : %d",iRet);

  return 0;

}
