#include<stdio.h>
void DisplayConvert( char cValue)
{
  if(cValue>='a' && cValue<='z')
  {
    printf("%c\n",cValue-32);
  }
  else if(cValue>='A' &&cValue<='Z')
  {
    printf("%c\n",cValue);
  }
}

int main()
{
  char cValue='\0';
  printf("Enter character: ");
  scanf("%c",&cValue);
  DisplayConvert(cValue);
  return 0;
}