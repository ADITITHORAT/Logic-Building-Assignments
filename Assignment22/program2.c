#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
  bool bFlag = false;
  if(ch >='A' && ch <='Z')
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

  bRet = CheckCapital(cValue);
  if(bRet == true)
  {
    printf("It is a capital");
  }
  else
  {
    printf("It is not capital");
  }
  return 0;

}