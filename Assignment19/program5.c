#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int  Frequency(int A[] ,int iLength,int iNo)
{
  int iCnt = 0,iCount = 0;
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    if(A[iCnt] == iNo)
    {
      iCount ++;
    }
    
  }
  
  return iCount;
}
int main()
{
  int iCnt = 0,iSize = 0,iRet = 0,iValue = 0;
  
  int *p = NULL;
  printf("Enter the number of elements: ");
  scanf("%d",&iSize);

  printf("Enter the number you want to search: ");
  scanf("%d",&iValue);
  p = (int *)malloc(iSize *sizeof(int));
  if(NULL == p)
  {
    printf("Unable to allocate memory");
    return -1;
  }

  printf("Enter %d elements\n",iSize);
  for(iCnt = 0;iCnt < iSize ;iCnt++)
  {
    printf("enter the %d element: ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  iRet = Frequency(p,iSize,iValue);
  
  printf("%d occured %d times",iValue,iRet);
  free(p);
  return 0;
}