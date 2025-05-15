#include<stdio.h>

void Display(){
  int i=0;

  int iMax=5;
  while(iMax>0)
  {
    printf("%d\n",iMax);
    iMax--; 
  }
}

int main()
{
  Display();
  return 0;

}