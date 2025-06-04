#include<stdio.h>

void StrUpper(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str>='a' && *str <= 'z')
   {
    printf("%c",*str-32);
   }
   else
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
  StrUpper(Arr);
  return 0;
}