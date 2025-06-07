#include<stdio.h>

void Toggle(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
   if(*str>='a' && *str <= 'z')
   {
     *str = *str-32;
   }
   else if( *str >='A' && *str <='Z')
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
  Toggle(Arr);
  printf("Modifed string: %s",Arr);
  return 0;
}
