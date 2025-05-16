#include<stdio.h>
// TIME COMPLEXITY O(D)  {D IS THE NUMBER OF DIGITS }

int CountDiff(int iNo)
{
  int iDigit = 0,iEven = 0,iOdd=0,iDiff=0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    if((iDigit % 2) == 0)
    {
      iEven = iEven + iDigit;
    }
    else
    {
      iOdd = iOdd + iDigit;
    }
    iDiff = iEven - iOdd;
  }
  return iDiff;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number: ");
  scanf("%d",&iValue);
  iRet=CountDiff(iValue);
  printf("%d",iRet);
  return 0;

}