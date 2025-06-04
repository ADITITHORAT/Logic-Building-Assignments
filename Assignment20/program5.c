#include<stdio.h>
#include<stdlib.h>


int  Product(int A[] ,int iLength)
{
  int iCnt = 0,iMul = 1,iCount = 0;
  
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    if((A[iCnt] % 2 ) != 0)
    {
      iMul =  iMul * A[iCnt];
      iCount++;
    }
    
  }
  
  if (iCount == 0)
  {
    return -1;
  }
  else
  {
    return iMul ;
  }
  
}
int main()
{
  int iCnt = 0,iSize = 0,iValue = 0,iRet = 0 ;
  
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
  for(iCnt=0;iCnt <iSize ;iCnt++)
  {
    printf("enter the %d element: ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  iRet = Product(p,iSize);
  if(iRet == -1)
  {
    printf("no odd numbers");
  }
  else
  {
    printf("%d is product of odd numbers",iRet);
  }
  
  
  free(p);
  return 0;
}
