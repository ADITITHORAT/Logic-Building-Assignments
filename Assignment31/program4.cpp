#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT ToggleBit(UINT iNo)
{
  UINT iMask = 1 ,iMask1 = 1,iMask2 = 1, iResult = 0;
  iMask1 = iMask1 << 6;
  iMask2 = iMask2 << 9;

  iMask = iMask1 | iMask2;
  iResult =  iNo ^ iMask ;
  return iResult;
}

int main()
{
  UINT iValue = 0;
  UINT ret = 0;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;

  ret = ToggleBit(iValue);
  cout<<"changed value is: "<<ret<<endl;
  return 0;
}