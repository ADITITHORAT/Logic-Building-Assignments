#include<stdio.h>
// TIME COMPLEXITY = O(1)  
void Table (int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0, iMultiple=0;
  for(iCnt=1;iCnt<=10;iCnt++)
  {
    iMultiple = iCnt * iNo;
    printf("%d ",iMultiple);
    iMultiple=0;
  }
}


int main()
{
  int iValue = 0,iRet=0;
  printf("Enter the Numer : ");
  scanf("%d",&iValue);
  Table(iValue);
  return 0;
}




