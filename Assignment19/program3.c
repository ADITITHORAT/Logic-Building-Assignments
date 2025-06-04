#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int A[] ,int iLength)
{
  int iCnt = 0;
  bool bFlag = false;
  for(iCnt = 0;iCnt < iLength;iCnt++)
  {
    if(A[iCnt] == 11)
    {
      bFlag = true;
      break;
    }
    
  }
  
  return bFlag;
}
int main()
{
  int iCnt = 0,iSize = 0;
  bool bRet = false;
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
  bRet = Check(p,iSize);
  
  if(bRet == true)
  {
    printf("11 is present");
  }
  else
  {
    printf("11 is not present");
  }
  free(p);
  return 0;
}