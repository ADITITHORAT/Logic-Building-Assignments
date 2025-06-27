#include<iostream>
using namespace std;

template <class T>

int SearchLast( T *arr, int iSize ,T iNo)
{
   int iCnt = 0,iLast = 0;
   for(iCnt = 0 ; iCnt < iSize ; iCnt++)
   {
    if(arr[iCnt] == iNo)
    {
      iLast = iCnt+1;
    }
   }
   return iLast;
}

int main()
{
  int arr[] = {10,20,30,10,30,40,10,40,10};
  int iRet = SearchLast(arr,9,40);
  cout<<"Last occurance of 40 is :"<<iRet<<endl;
  return 0;
}