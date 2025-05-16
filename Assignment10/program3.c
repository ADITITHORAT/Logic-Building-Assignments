#include<stdio.h>
// TIME COMPLEXITY O(D)  {D IS THE NUMBER OF DIGITS }

int CountRange(int iNo)
{
  int iDigit = 0,iCnt = 0;
  if(iNo < 0)
  {
    iNo = -iNo;
  }
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    if((iDigit < 7) && (iDigit > 3))
    {
      iCnt++;
    }
  }
  return iCnt;
}
int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter number: ");
  scanf("%d",&iValue);
  iRet=CountRange(iValue);
  printf("%d",iRet);
  return 0;

}