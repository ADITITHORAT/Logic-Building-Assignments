#include<stdio.h>

void DisplayDigits(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str >= '0' && *str <= '9')
   {
    printf("%c",*str);
   }
    str++;
  }
 
}
int main()
{
  char Arr[20];
  int iRet = 0;
  printf("Enter string : ");
  scanf("%[^'\n']s",Arr);
  DisplayDigits(Arr);
  return 0;
}