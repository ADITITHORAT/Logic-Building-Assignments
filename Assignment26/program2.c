#include<stdio.h>
#include<stdbool.h>

int  CountChar (char *str,char ch)
{
  int iCount = 0;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      iCount++;
    }
    *str++;
  }
  return iCount;
}

int main()
{
  char arr[20];
  char cValue = '\0';
  int iRet = 0;
  printf("Enter the string: ");
  scanf("%[^\n]s",arr);
  printf("Enter the character: ");
  scanf("\n%c",&cValue);

  iRet = CountChar(arr,cValue);
  printf("character frequency is %d",iRet);
  

  return 0;
}