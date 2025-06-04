#include<stdio.h>
#include<stdbool.h>

bool  CheckSpecial(char ch)
{
  bool bFlag = false;
  if(ch =='!' || ch =='@' || ch =='$' || ch =='%' ||ch =='^' || ch =='&' || ch =='*')
  {
    bFlag = true;
  }
  return bFlag;
  
}
int main()
{
  char cValue='\0';
  bool bRet = false;
  printf("Enter the character: ");
  scanf("%c",&cValue);
  bRet = CheckSpecial(cValue);
  if(bRet == true)
  {
    printf("its special character");
  }
  else
  {
    printf("its not a  special character");
  }
  return 0;
}