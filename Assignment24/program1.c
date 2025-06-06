#include<stdio.h>

int countCapital(char* str)
{
  int iCount = 0; 
  while(*str != '\0')
  {
    if((*str<='Z') &&(*str>='A'))
    {
      iCount++;
    }
    str++;
  }
  return iCount;
}
int main()
{
  char Arr[20];
  int iRet = 0;
  printf("Enter string : ");
  scanf("%[^'\n']s",Arr);
  iRet = countCapital(Arr);
  printf("number of capital letters is : %d",iRet);
  return 0;
}