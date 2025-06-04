#include<stdio.h>
#include<stdlib.h>


int  LastOcc(int A[] ,int iLength,int iNo)
{
  int iCnt = 0;
  
  for(iCnt = iLength;iCnt >=0;iCnt--)
  {
    if(A[iCnt] == iNo)
    {
      return iCnt;
    }
    
  }
  return -1 ;
}
int main()
{
  int iCnt = 0,iSize = 0,iValue = 0,iRet = 0 ;
  
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
  iRet = LastOcc(p,iSize,iValue);
  
  if(iRet == -1)
  {
    printf("%d is not present",iValue);
  }
  else
  {
    printf("%d's last occurance at %d",iValue,iRet);
  }
  free(p);
  return 0;
}