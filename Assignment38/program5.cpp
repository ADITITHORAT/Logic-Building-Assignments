#include<iostream>
using namespace std;

template <class T>
T Min (T *arr,int iSize)
{
  T MinValue;
  int i = 0;
  MinValue = arr[0];
  for(i = 0 ;i< iSize ; i++)
  {
    if(MinValue > arr[i])
    {
      MinValue = arr[i];
    }
  }
  return MinValue;
}

int main()
{
  int arr[] = {10,20,30,40,50};
  float brr[] = {10.0,3.7,9.8,8.7};
  int iSum = Min(arr,5);
  printf("%d\n",iSum);
  float fSum = Min(brr,4);
  printf("%f",fSum);
  return 0 ;
}