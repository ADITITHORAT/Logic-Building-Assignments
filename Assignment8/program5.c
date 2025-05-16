#include<stdio.h>
//TIME COMPLEXITY O(1)
double SquareMeter(int iValue)
{
  double fSqMeter = 0.0;
  fSqMeter = (double)iValue * 0.0929;
  return fSqMeter;
}
int main()
{
  int iValue = 0;
  double dRet = 0.0 ;
  printf("Enter the area of square feet : ");
  scanf("%d", &iValue);
  dRet = SquareMeter(iValue);
  printf(" %lf",dRet);
}
