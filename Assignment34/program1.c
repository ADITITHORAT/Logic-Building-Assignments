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

int SearchFirstOcc(PNODE first , int no)
{
  int iCount = 0;
  while (first != NULL)
  {
    iCount++;
    if(first->data == no)
    {
      break;
    }
    first = first -> next;
  }
  return iCount;
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
  int iValue = 0;
  printf("Enter the element to be searched: ");
  scanf("%d",&iValue);
  InsertFirst(&head,10);
  InsertFirst(&head,20);
  InsertFirst(&head,30);
  InsertFirst(&head,40);
  InsertFirst(&head,50);
  InsertFirst(&head,60);
  InsertFirst(&head,70);
  Display(head);
  iRet = SearchFirstOcc(head,iValue);
  
  printf("\nelement occured at :%d",iRet);
  return 0;

}
