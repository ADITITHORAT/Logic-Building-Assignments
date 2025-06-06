#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char* str)
{
  bool bFlag = false;
  while(*str != '\0')
  {
    if((*str=='A') || (*str=='a') || (*str=='E')|| (*str=='e')|| (*str=='I')|| (*str=='i')|| (*str=='O')|| (*str=='o')|| (*str=='U')|| (*str=='u'))
    {
      bFlag = true;
      break;
    }
    else
    {
      bFlag = false;
    }
    
    str++;
  }
  
  return bFlag;
}
int main()
{
  char Arr[20] ;
  bool bRet = false;
  printf("Enter string : ");
  scanf("%[^'\n']s",Arr);
  bRet = CheckVowel(Arr);
  if(bRet == true)
  {
    printf("it contains a vowel");
  }
  else
  {
    printf("it does not have a vowel");
  }
 
  return 0;
}