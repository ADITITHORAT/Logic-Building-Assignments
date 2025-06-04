#include<stdio.h>

void StrLower(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str>='A' && *str <= 'Z')
   {
    printf("%c",*str+32);
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
  StrLower(Arr);
  return 0;
}