#include<stdio.h>
//TIME COMPLEXITY O(N) {O(2N) IS CONSIDERED O(N)}
void Display(int iNo)
{
  int iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  for(iCnt=1;iCnt<=2*iNo;iCnt++)
  {
    if(iCnt <= iNo)
    {
      printf(" * ");
    }
    if(iCnt > iNo)
    {
      printf(" # ");
    }
  }
}

int main()
{
  int iValue = 0;
  printf("Enter number: ");
  scanf("%d",&iValue);
  Display(iValue);
  return 0;
}