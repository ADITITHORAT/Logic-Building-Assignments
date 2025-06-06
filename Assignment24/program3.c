#include<stdio.h>

int countCapital(char* str)
{
  int iCountSmall = 0,iCountCapital = 0,iDiff = 0; 
  while(*str != '\0')
  {
    if((*str<='z') &&(*str>='a'))
    {
      iCountSmall++;
    }
    else if ((*str<='Z') &&(*str>='A'))
    {
      iCountCapital++;
    }
    str++;
  }
  iDiff = iCountSmall-iCountCapital;
  return iDiff;
}
int main()
{
  char Arr[20];
  int iRet = 0;
  printf("Enter string : ");
  scanf("%[^'\n']s",Arr);
  iRet = countCapital(Arr);
  printf("differnce of  letters is : %d",iRet);
  return 0;
}