#include<stdio.h>
// TIME COMPLEXITY = O(1)  
void TableRev (int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0, iMultiple=0;
  for(iCnt=10;iCnt>=1;iCnt--)
  {
    iMultiple = iCnt * iNo;
    printf("%d ",iMultiple);
   
  }
}


int main()
{
  int iValue = 0,iRet=0;
  printf("Enter the Numer : ");
  scanf("%d",&iValue);
  TableRev(iValue);
  return 0;
}




