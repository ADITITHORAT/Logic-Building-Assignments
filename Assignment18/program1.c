#include<stdio.h>
#include<stdlib.h>

int Difference(int A[],int iLength)
{
  int iCnt = 0,iSumEven = 0,iSumOdd = 0,iDiff = 0;
  for(iCnt = 0; iCnt < iLength ; iCnt++)
  {
    if((A[iCnt] % 2 ) == 0)
    {
      iSumEven += A[iCnt];
    }
    else
    {
      iSumOdd +=A[iCnt];
    }
  }

  iDiff = iSumEven -iSumOdd;
  return iDiff;
}
int main()
{
  int iSize = 0,iRet = 0 ,iCnt = 0;
  int *p = NULL;

  printf("Enter the number of elements:");
  scanf("%d",&iSize);

  p = (int*)malloc(iSize * sizeof(int));

  if(NULL == p)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter the %d element: \n",iSize);
  
  for(iCnt = 0 ;iCnt<iSize;iCnt++)
  {
    printf("Enter the element %d :",iCnt+1);
    scanf("%d",&p[iCnt]);
  }

  iRet = Difference(p,iSize);
  printf("Result is %d",iRet);
  free(p);
  return 0;
}