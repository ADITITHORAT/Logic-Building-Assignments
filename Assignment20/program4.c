#include<stdio.h>
#include<stdlib.h>


void  Range(int A[] ,int iLength,int iStart,int iEnd)
{
  int iCnt = 0;
  
  for(iCnt = 0;iCnt <iLength;iCnt++)
  {
    if((A[iCnt] >= iStart) && (A[iCnt]<=iEnd))
    {
      printf("%d  ",A[iCnt]);
    }
    
  }

}
int main()
{
  int iCnt = 0,iSize = 0,iValue1 = 0,iRet = 0,iValue2 = 0 ;
  
  int *p = NULL;
  printf("Enter the number of elements: ");
  scanf("%d",&iSize);
  printf("Enter the starting point: ");
  scanf("%d",&iValue1);
  printf("Enter the ending point: ");
  scanf("%d",&iValue2);

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
  Range(p,iSize,iValue1,iValue2);
  
  
  free(p);
  return 0;
}