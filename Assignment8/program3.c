#include<stdio.h>
//TIME COMPLEXITY O(1)
int KMtoMeter(int iNo)
{
  int iVal = 0;
  iVal = iNo * 1000;
  return iVal;
}

int main()
{
  int iValue = 0;
  int  iRet = 0 ;
  printf("Enter Distance: ");
  scanf("%d",&iValue);
  
  iRet = KMtoMeter(iValue);
  printf("Value in meter : %d\n",iRet);
  return 0;
}


