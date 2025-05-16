#include<stdio.h>
// TIME COMPLEXITY O(D)  {D IS THE NUMBER OF DIGITS }

int MultDigits(int iNo)
{
  int iDigit = 0,iMul = 1;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    if(iDigit == 0)
    {
      continue;
    }
    else
    {
      iMul = iMul * iDigit;
    }
    
  }
  return iMul;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number: ");
  scanf("%d",&iValue);
  iRet=MultDigits(iValue);
  printf("%d",iRet);
  return 0;

}