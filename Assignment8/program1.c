#include<stdio.h>
#define PI 3.14
double CircleArea(float fRadius)
{
  double dArea = 0.0;
  dArea = (double)PI * (double ) fRadius *  (double)fRadius;
  return dArea;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0 ;
  printf("Enter radius: ");
  scanf("%f",&fValue);
  dRet = CircleArea(fValue);
  printf("Area of circle is : %lf\n",dRet);
  return 0;
}
 // TIME COMPLEXITY O(1)


