#include<iostream>
using namespace std;

template <class T>
T Max (T *arr,int iSize)
{
  T MaxValue;
  int i = 0;
  MaxValue = arr[0];
  for(i = 0 ;i< iSize ; i++)
  {
    if(MaxValue < arr[i])
    {
      MaxValue = arr[i];
    }
  }
  return MaxValue;
}

int main()
{
  int arr[] = {10,20,30,40,50};
  float brr[] = {10.0,3.7,9.8,8.7};
  int iSum = Max(arr,5);
  printf("%d\n",iSum);
  float fSum = Max(brr,4);
  printf("%f",fSum);
  return 0 ;
}