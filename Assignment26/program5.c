#include<stdio.h>
#include<stdbool.h>

void  StrRev (char *str)
{
  char *dest = str;
  char *final = str;
  char  iTemp = '\0';

  while(*dest != '\0')
  {
    dest++;
  }
  dest--;
 
  while (dest > str)
  {
    iTemp = *dest;
    *dest = *str;
    *str = iTemp;
    str++;
    dest--;
   
  }
  printf("%s",final);
}

int main()
{
  char arr[20];
  char cValue = '\0';
  int iRet = 0;
  printf("Enter the string: ");
  scanf("%[^\n]s",arr);

  StrRev(arr);

  return 0;
}