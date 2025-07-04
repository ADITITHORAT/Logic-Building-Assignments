#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo)
{
  UINT iMask = 0x0000000F, iResult = 0;
  iResult = iNo |iMask;
  return iResult;
}

int main()
{
  UINT iValue = 0;
  UINT ret = 0;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;

  ret = OnBit(iValue);
  cout<<"changed value is: "<<ret<<endl;
  return 0;
}