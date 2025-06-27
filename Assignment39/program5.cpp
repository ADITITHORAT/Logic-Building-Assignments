#include<iostream>
using namespace std;

template <class T>

void Reverse(T *arr,int iSize)
{
  int first = 0;
  int last = iSize-1;
  int temp = 0;
  while (first<last)
  {
    temp = arr[first];
    arr[first] = arr[last];
    arr[last] = temp ;
    first++;
    last--;
  }
  
}

int main()
{
  int i = 0;
  int arr[] = {10,20,30,40,50,60,70,80,90};
  for(i = 0 ;i<9;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  Reverse(arr,9);
  for(i = 0 ;i<9;i++)
  {
    cout<<arr[i]<<" ";
  }
  cout<<endl;
  return 0;
}