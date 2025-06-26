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

void  SumDigit(PNODE first)
{
  int iDigit = 0, iSum = 0,iNo = 0;
  
  while (first != NULL)
  {
    iNo = first ->data;
    iSum = 0;
    while (iNo != 0)
    {
      iDigit = iNo % 10;
      iNo = iNo / 10;
      iSum = iSum + iDigit;
    }

    printf("%d\t",iSum);
    first = first ->next;
  }
  
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
  SumDigit(head);

  return 0;

}
