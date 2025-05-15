#include<stdio.h>
// TIME COMPLEXITY = O(N)  {AS O(N/2) IS CONSIDERED O(N)}
void FactRev(int iNo)
{
 int iCnt = 0;
 for(iCnt=(iNo/2);iCnt>=1;iCnt--){
  if((iNo % iCnt) == 0)
  {
    printf("%d ",iCnt);
  }
 }
}

int main()
{
  int iValue = 0;
  printf("Enter the number :");
  scanf("%d",&iValue);
  FactRev(iValue);
  return 0;
}