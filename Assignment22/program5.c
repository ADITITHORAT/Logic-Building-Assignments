#include<stdio.h>
#include<stdbool.h>

void DispalaySchedule(char chDiv)
{
  if(chDiv == 'A' || chDiv == 'a' )
  {
    printf("Your exam is at 7 a.m");
  }
  else if(chDiv == 'B' || chDiv == 'b' )
  {
    printf("Your exam is at 8:30 a.m");
  }
  else if(chDiv == 'C' || chDiv == 'c' )
  {
    printf("Your exam is at 9:30 a.m");
  }
  else if(chDiv == 'D' || chDiv == 'd' )
  {
    printf("Your exam is at 10:30 a.m");
  }
  else
  {
    printf("Invalid input ");
  }

}
int main()
{
  char cValue ='\0';
  
  printf("Enter the Division: ");
  scanf("%c",&cValue);

  DispalaySchedule(cValue);
  
  return 0;

}