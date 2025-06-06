#include<stdio.h>

void StrCatX(char *src, char *dest)
{
  while(*src != '\0')
  {
    src++;
  }
  
  while (*dest != '\0')
  {
    *src = *dest;
    dest++; 
    src++;
  }
  *src = '\0';
  
}

int main()
{
  char arr[30] = "Marvellous Multi OS";
  char brr[30] = " Logic building";
  StrCatX(arr,brr);
  printf("%s",arr);
  return 0;
}