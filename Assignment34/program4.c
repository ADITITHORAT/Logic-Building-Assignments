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

int Maximum(PNODE first)
{
  int iMax = 0;
  iMax = first->data;
  while (first != NULL)
  {
    if((first->data) > iMax)
    {
      iMax = first -> data;
    }
    first = first ->next;
  }
  return iMax;
}

void Display(PNODE first)
{
  while (first != NULL)
  {
    printf("| %d | -> ",first->data);
    first = first->next;
  }
  printf("NULL");
  
}
int main()
{
  PNODE head = NULL;
  int iRet = 0;
  InsertFirst(&head,240);
  InsertFirst(&head,320);
  InsertFirst(&head,230);
  InsertFirst(&head,110);
  Display(head);
  iRet = Maximum(head);
  
  printf("\n Maximum  is  : %d",iRet);
  return 0;

}
