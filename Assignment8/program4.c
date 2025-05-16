#include<stdio.h>
//TIME COMPLEXITY O(1)
double  FhtoCs(float fTemp)
{
  double  fCelcius = 0.0f ;
  fCelcius = (fTemp -32) * (5.0/9.0);
  return fCelcius;
}

int main()
{
  float fValue = 0.0f;
  double dRet = 0.0 ;
  printf("Enter temperature in Farhrenheit: ");
  scanf("%f", &fValue);
  dRet=FhtoCs(fValue);
  printf("Value in celsius: %lf", dRet);
  return 0;
}


