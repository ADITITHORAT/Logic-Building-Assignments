#include<stdio.h>
//TIME COMPLEXITY O(1)
int DollarToINR(int iNo)
{
  int iValue = 0;
  iValue = iNo * 70;
  return iValue;
}

int main()
{
  int iValue = 0, iRet = 0;
  printf("Enter number in USD: ");
  scanf("%d",&iValue);
  iRet=DollarToINR(iValue);
  printf("Value in INR is %d",iRet);
  return 0;
}