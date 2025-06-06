#include<stdio.h>
#include<stdbool.h>

bool CheckChar (char *str,char ch)
{
  bool bFlag = false;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      bFlag = true;
    }
    *str++;
  }
  return bFlag;
}

int main()
{
  char arr[20];
  char cValue = '\0';
  bool bRet = false ;
  printf("Enter the string: ");
  scanf("%[^\n]s",arr);
  printf("Enter the character: ");
  scanf("\n%c",&cValue);

  bRet = CheckChar(arr,cValue);

  if(bRet == true)
  {
    printf("Character found");
  }

  else
  {
    printf("character not found");
  }

  return 0;
}