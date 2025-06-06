#include<stdio.h>
// TIME COMPLEXITY = O(N)  
int SumNonFact(int iNo)
{
  int iCnt=0;
  int iSum=0;
  for(iCnt=1;iCnt<iNo;iCnt++)
  {
    if((iNo %iCnt) != 0)
    {
      iSum=iSum + iCnt; 
    }
  }
  return iSum;
}

int main()
{
  int iValue=0;
  int iRet=0;
  printf("Enter the number: ");
  scanf("%d",&iValue);
  iRet=SumNonFact(iValue);
  printf("Summation of non-factor of %d is %d",iValue,iRet);
  return 0;
}