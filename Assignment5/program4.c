#include<stdio.h>
// TIME COMPLEXITY = O(N)  {O(N/2) WHICH IS O(N)}
void OddDisplay(int iNo)
{
  int iCnt=0;
  for(iCnt=1;iCnt<=iNo;iCnt+=2)
  {
    if((iCnt % 2) != 0)
    printf("%d ",iCnt);
  }
  
}

int main()
{
  int iValue = 0;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  OddDisplay(iValue);
  return 0;
}