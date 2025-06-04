#include<stdio.h>
#include<stdlib.h>
int Difference(int A[] ,int iLength)
{
  int iCnt = 0,iMin = 0,iMax = 0,iDiff = 0;
  iMin = A[0],iMax = A[0];
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    if(A[iCnt] < iMin)
    {
      iMin = A[iCnt];
    }
    if(A[iCnt] > iMax)
    {
      iMax = A[iCnt];
    }
  }
  iDiff = iMax - iMin;
  return iDiff;
}
int main()
{
  int iCnt = 0,iSize = 0,iRet = 0;
  int *p = NULL;
  printf("Enter the number of elements: ");
  scanf("%d",&iSize);

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
  iRet = Difference(p,iSize);
  
  printf("Difference number is :%d ",iRet);
  free(p);
  return 0;
}