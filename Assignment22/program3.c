#include<stdio.h>
#include<stdbool.h>

bool CheckDigit(char ch)
{
  bool bFlag = false;
  if(ch >='0' && ch <='9')
  {
    bFlag = true;
  }
  else
  {
    bFlag = false;
  }
  return bFlag;
}
int main()
{
  char cValue ='\0';
  bool bRet = false;
  printf("Enter the Character: ");
  scanf("%c",&cValue);

  bRet = CheckDigit(cValue);
  if(bRet == true)
  {
    printf("It is a digit");
  }
  else
  {
    printf("It is not digit");
  }
  return 0;

}