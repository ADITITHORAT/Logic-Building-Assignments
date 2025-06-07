#include<stdio.h>

void StrLwrX(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str>='A' && *str <= 'Z')
   {
    *str = *str+32;
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
  StrLwrX(Arr);
  printf("Modified string: %s",Arr);
  return 0;
}
