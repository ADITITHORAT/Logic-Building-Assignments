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

int Addition(PNODE first)
{
  int iSum = 0;
  while (first != NULL)
  {
    iSum = iSum + (first->data);
    first = first -> next;
  }
  return iSum;
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
  InsertFirst(&head,10);
  InsertFirst(&head,20);
  InsertFirst(&head,30);
  InsertFirst(&head,40);
  Display(head);
  iRet = Addition(head);
  
  printf("\nAddition of elements is  : %d",iRet);
  return 0;

}
