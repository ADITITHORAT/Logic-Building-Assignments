#include<stdio.h>
// TIME COMPLEXITY O(D)  {D IS THE NUMBER OF DIGITS }
void DisplayDigit(int iNo)
{
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while(iNo != 0)
  {
  int iDigit = 0;
  iDigit = iNo % 10;
  iNo =iNo / 10 ;
  printf(" %d\n",iDigit);
  }

}

int main()
{
  int iValue = 0;
  printf("Enter number :");
  scanf(" %d", &iValue);
  DisplayDigit(iValue);
  return 0;
}