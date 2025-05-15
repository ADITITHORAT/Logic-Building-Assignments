#include<stdio.h>
// TIME COMPLEXITY = O(1)   {O(5) IS CONSIDERED AS O(1)}
void MultipleDisplay(int iNo)
{
  int iCnt=0, iMultiple=0;
  for(iCnt=1;iCnt<=5;iCnt++)
  {
    iMultiple = iCnt * iNo;
    printf("%d ",iMultiple);
    iMultiple=0;
  }
 
}


int main()
{
  int iValue = 0;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  MultipleDisplay(iValue);
  return 0;
}