#include<stdio.h>
#include<stdbool.h>

bool CheckAlpha(char ch)
{
  bool bFlag = false;
  if((ch >='A' && ch <='Z') ||(ch >='a' && ch <='z'))
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

  bRet = CheckAlpha(cValue);
  if(bRet == true)
  {
    printf("It is a Alphabet");
  }
  else
  {
    printf("It is not an Alphabet");
  }
  return 0;

}