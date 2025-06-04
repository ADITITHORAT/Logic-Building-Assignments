#include<stdio.h>
void DisplayASCII()
{
  char ch ='\0';
  int iCnt = 0;
  printf("oct\thex\tdec\tchar\t\n");
  for(iCnt = 0 ;iCnt <=127;iCnt++)
  {
    printf("%o\t %x\t %d\t %c\t\n ",iCnt,iCnt,iCnt,iCnt);
  }
}
int main()
{
  DisplayASCII();
  return 0;
}