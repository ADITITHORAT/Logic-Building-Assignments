#include<stdio.h>
// TIME COMPLEXITY = O(N)  
void Pattern(int iNo)
{
  int iCnt=0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt=1;iCnt<=iNo;iCnt++)
  {
    printf("$ * ");
  }
  
}

int main()
{
  int iValue = 0;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  Pattern(iValue);
  return 0;
}