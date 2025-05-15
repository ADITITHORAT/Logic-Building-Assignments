#include<stdio.h>
//TIME COMPLEXITY O(N)
int FactDiff(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt = 0,iEven = 1,iOdd = 1,iDiff = 0;
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    if((iCnt % 2 ) == 0)
    {
      iEven = iEven * iCnt;
    }
    else
    {
      iOdd = iOdd * iCnt;
    }
  }
  iDiff = iEven - iOdd;
  return iDiff;
}
int main()
{
  int iValue = 0,iRet = 0;
  printf("Enter the number: ");
  scanf("%d",&iValue);
  iRet=FactDiff(iValue);
  printf(" Factorial  Difference of number is %d",iRet);
  return 0;
}