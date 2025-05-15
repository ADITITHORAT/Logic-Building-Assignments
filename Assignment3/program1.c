#include<stdio.h>
void PrintEven(int iNo)
{
  if(iNo<=0)
  {
    return;
  }
  else
  {
    if(iNo%2==0)
    {
      printf("%d Number is Even",iNo);
    }
    else
    {
      printf("%d Number is Odd",iNo);
    }
  }
}
int main()
{
  int iValue=0;
  printf("Enter number\n");
  scanf("%d",&iValue);
  PrintEven(iValue);
  return 0;
}