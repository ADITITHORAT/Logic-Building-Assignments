#include<stdio.h>
// TIME COMPLEXITY = O(N)  
int Factorial(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0,iMul=1;
  for(iCnt=iNo;iCnt>1;iCnt--,iNo--)
  {
    iMul = iMul * iNo;
  }
}


int main()
{
  int iValue = 0,iRet=0;
  printf("Enter the Numer : ");
  scanf("%d",&iValue);
  iRet=Factorial(iValue);
  printf("Factorial of the number is %d ",iRet);
  return 0;
}