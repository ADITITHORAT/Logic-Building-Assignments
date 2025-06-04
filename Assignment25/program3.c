#include<stdio.h>

void Toggle(char* str)
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
    printf("%c",*str+32);
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
  Toggle(Arr);
  return 0;
}