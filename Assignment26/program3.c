#include<stdio.h>
#include<stdbool.h>

int  FirstOcc (char *str,char ch)
{
  int iCount = 0;
  while(*str != '\0')
  {
    if(*str == ch)
    {
      break;
    }
    else
    {
      *str++;
      iCount++;
    }
    
  }
  if(*str != '\0')
  {
    return iCount;
  }
  else
  {
    return -1;
  }
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

  iRet = FirstOcc(arr,cValue);
  if(iRet == -1)
  {
    printf("character not found");
  }
  else
  {
    printf("character occured at  %d",iRet);
  }

  return 0;
}