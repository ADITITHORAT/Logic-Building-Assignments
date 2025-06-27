#include<iostream>
using namespace std;

template <class T>
T Max (T no1 , T no2 , T no3)
{
  T MaxValue = 0 ;
  if((no1 > no2) && ( no1 > no3))
  {
    MaxValue = no1;
  }
  else if((no2 > no1) && ( no2 > no3))
  {
    MaxValue = no2;
  }
  else
  {
    MaxValue = no3;
  }
  return MaxValue;
}

int main()
{
  int iRet = Max(10,20,30);
  printf("%d\n",iRet);

  float fRet = Max (10.0f , 20.0f,30.0f);
  printf("%f",fRet);
  return 0 ;
}