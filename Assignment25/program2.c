#include<stdio.h>

void StrUprX(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str>='a' && *str <= 'z')
   {
    *str = *str-32;
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
  StrUprX(Arr);
  printf("Modified string: %s",Arr);
  return 0;
}
