#include<stdio.h>
// TIME COMPLEXITY O(D)  {D IS THE NUMBER OF DIGITS }

int Count(int iNo)
{
  int iDigit = 0,iCnt = 0;
  while (iNo != 0)
  {
    iDigit = iNo % 10;
    iNo = iNo / 10;
    if(iDigit < 6)
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
  iRet=Count(iValue);
  printf("%d",iRet);
  return 0;

}