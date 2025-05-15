#include<stdio.h>
// TIME COMPLEXITY = O(N)  
int FactDiff(int iNo)
{
  int iCnt = 0,iSumNonFact = 0,iSumFact = 0,iDiff = 0;
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo % iCnt) != 0)
    {
      iSumNonFact = iSumNonFact + iCnt; 
    }
    else
    {
      iSumFact = iSumFact + iCnt;
    }
  }
  iDiff = iSumFact - iSumNonFact;
  return iDiff;
}

int main()
{
  int iValue = 0 , iRet = 0;
  printf("Enter the number: ");
  scanf("%d",&iValue);
  iRet=FactDiff(iValue);
  printf("Difference  of  factor & non-factor of %d is %d",iValue,iRet);
  return 0;
}