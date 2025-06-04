#include<stdio.h>
#include<stdlib.h>

int Frequency(int A[] ,int iLength)
{
  int iCnt = 0,iCountEven = 0,iCountOdd = 0,iDiff = 0;
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    if((A[iCnt] % 2) == 0)
    {
      iCountEven++;
    }
    else
    {
      iCountOdd++;
    }
  }
  iDiff = iCountEven -iCountOdd;
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
  iRet = Frequency(p,iSize);
  
  printf("Difference between sum of even and odd frequency is :%d ",iRet);
  free(p);
  return 0;
}