#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int A[] ,int iLength,int iNo)
{
  int iCnt = 0;
  bool bFlag = false;
  for(iCnt =0;iCnt <iLength;iCnt++)
  {
    if(A[iCnt] == iNo)
    {
      bFlag = true;
      break;
    }
    
  }
  
  return bFlag;
}
int main()
{
  int iCnt = 0,iSize = 0,iValue = 0;
  bool bRet = false;
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
  for(iCnt=0;iCnt <iSize ;iCnt++)
  {
    printf("enter the %d element: ",iCnt+1);
    scanf("%d",&p[iCnt]);
  }
  bRet = Check(p,iSize,iValue);
  
  if(bRet == true)
  {
    printf("%d is present",iValue);
  }
  else
  {
    printf("%d is not present",iValue);
  }
  free(p);
  return 0;
}