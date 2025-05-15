#include<stdio.h>
// TIME COMPLEXITY = O(1)  
void Number(int iNo)
{
  if(iNo<0)
  {
    iNo = -iNo;
  }
  if((iNo >= 0) && (iNo < 50))
  {
    printf("Small");
  }
  else if((iNo >= 50) && (iNo < 100))
  {
    printf("Medium");
  }
  else{
    printf("Large");
  }
}


int main()
{
  int iValue = 0;
  printf("Enter the number : ");
  scanf("%d",&iValue);
  Number(iValue);
  return 0;
}