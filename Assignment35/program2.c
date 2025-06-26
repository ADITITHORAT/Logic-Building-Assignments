#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
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

void DisplayPrime(PNODE first)
{
  int iCnt = 0, iSum = 0;
  
  while (first != NULL)
  {
    int  iCnt = 0;
    bool bFlag = false;
    for(iCnt = 2; iCnt <= ((first->data)/2); iCnt++)
    {
      if((first -> data) % iCnt == 0)
      {
        bFlag = true;
        break;
      } 
    } 
    if(bFlag == false)
    {
      printf("%d\t",first -> data);
    }
   
    first = first -> next;
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
  InsertFirst(&head,89);
  InsertFirst(&head,6);
  InsertFirst(&head,41);
  InsertFirst(&head,17);
  InsertFirst(&head,28);
  InsertFirst(&head,11);
  Display(head);
  DisplayPrime(head);
  

  return 0;

}
