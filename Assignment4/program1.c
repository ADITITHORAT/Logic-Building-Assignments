#include<stdio.h>
// TIME COMPLEXITY = O(N)  {AS O(N/2) IS CONSIDERED O(N)}
int MultFact(int iNo)
{
  int iCnt = 0;
  int iSum = 1;
  for(iCnt=1;iCnt<=(iNo/2);iCnt++)
  {
    if((iNo % iCnt) == 0)
    {
      iSum = iSum * iCnt;
    }
  }
  return iSum;
}

int main()
{
  int iValue = 0;
  int iRet = 0;
  printf("Enter the number: ");
  scanf("%d",&iValue);
  iRet=MultFact(iValue);
  printf("Multiplication of factors  %d  is : %d",iValue,iRet);
  return 0;
}