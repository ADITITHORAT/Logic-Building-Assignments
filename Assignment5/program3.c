#include<stdio.h>
// TIME COMPLEXITY = O(N)  {AS O(2N+1) IS CONSIDERED O(N)}
void Display(int iNo)
{
  int iCnt=0;
  for(iCnt=(-iNo);iCnt<=iNo;iCnt++)
  {
    printf("%d ",iCnt);
  }
  
}

int main()
{
  int iValue = 0;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  Display(iValue);
  return 0;
}