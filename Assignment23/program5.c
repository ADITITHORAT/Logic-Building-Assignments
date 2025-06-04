#include<stdio.h> 

void Display(char ch)
{
  printf("%c\n",ch);
  printf("octal:%o\n",ch);
  printf("hex:%x\n",ch);
  printf("dec:%d\n",ch);
  
}
int main()
{
  char cValue='\0';
  printf("Enter the character: ");
  scanf("%c",&cValue);
  Display(cValue);
  return 0;
}