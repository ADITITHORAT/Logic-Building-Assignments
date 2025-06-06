#include<stdio.h>
#include<stdbool.h>

void  Reverse(char* str)
{
 int iCount = 0;
 char *last = str;
  while(*str != '\0')
  {
    str++;
  }
  str--;
  while (str>=last)
  {
    printf("%c",*str);
    str--;
  }
}

int main()
{
  char Arr[20] ;
  printf("Enter string : ");
  scanf("%[^'\n']s",Arr);
  Reverse(Arr);
  return 0;
}