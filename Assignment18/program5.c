#include<stdio.h>
#include<stdlib.h>

void Display(int A [],int iLength)
{
  int iCnt = 0;
  for(iCnt = 0 ;iCnt <iLength ;iCnt ++)
  {
    if((A[iCnt] % 11 ) == 0) 
    {
      printf("%d  ",A[iCnt]);
    }
  }
}

int main()
{
  int iSize = 0 ,iCnt = 0;
  int * p = NULL;

  printf("Enter the number of elements:");
  scanf("%d",&iSize);


  p = (int *)malloc(iSize * sizeof(int));
  if(NULL == p)
  {
    printf("Unable to allocate memory");
    return -1;
  }
  printf("Enter the %d elements\n",iSize);
  for(iCnt = 0 ;iCnt <iSize ;iCnt ++)
  {
    printf("Enter the element %d :",iCnt+1);
    scanf("%d",&p[iCnt]);
  }

  Display(p,iSize);
  free(p);
  return 0;
}