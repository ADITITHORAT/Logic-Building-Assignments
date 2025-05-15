#include<stdio.h>
//TIME COMPLEXITY O(N)     
int EvenFactorial(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  int iCnt=0,iMul=1;
  for(iCnt=2;iCnt<=iNo;iCnt+=2)
  {
    
      iMul = iMul * iCnt;
    
  }
  return iMul;
}
int main()
{
  int iValue=0,iRet=0;
  printf("Enter the number: ");
  scanf("%d",&iValue);
  iRet=EvenFactorial(iValue);
  printf("Even Factorial of number is %d",iRet);
  return 0;
}