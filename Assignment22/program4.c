#include<stdio.h>
#include<stdbool.h>

bool CheckSmall(char ch)
{
  bool bFlag = false;
  if(ch >='a' && ch <='z')
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

  bRet = CheckSmall(cValue);
  if(bRet == true)
  {
    printf("It is a small case letter");
  }
  else
  {
    printf("It is not small case letter");
  }
  return 0;

}