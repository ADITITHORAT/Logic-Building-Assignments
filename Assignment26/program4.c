#include<stdio.h>
#include<stdbool.h>

int  LastChar (char *str,char ch)
{
  int iCount = 0;
  char *dest = str;
  while (*dest != '\0')
  {
    dest++;
    iCount++;
  }
  dest--;
  iCount--;
  while (dest>=str)
  {
    if(*dest == ch)
    {
      break;
    }
    else
    {
      dest--;
      iCount--;
    }
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

  iRet = LastChar(arr,cValue);
  if(iRet == -1)
  {
    printf("character not found");
  }
  else
  {
    printf("character occured last  at  %d",iRet);
  }
  
  

  return 0;
}