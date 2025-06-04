#include<stdio.h>
void Display(char ch)
{
  char ch1='\0';
  if(ch>='A' && ch <= 'Z')
  {
    printf("%c\t",ch+32);
  }
  else if(ch>='a' && ch<='z')
  {
    printf("%c\t",ch-32);
  }
  else
  {
    printf("%c\t",ch);
  }
}
int main()
{
  char cValue='\0';
  printf("Enter the character: ");
  scanf("%c",&cValue);
  Display(cValue);
  return 0;
}