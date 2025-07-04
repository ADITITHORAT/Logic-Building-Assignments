#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OffBit(UINT iNo)
{
  int iMask = 1;
  int iResult = 0;
  iMask = iMask << 6;
  iMask = ~iMask;
  iResult =  iNo & iMask ;
  return iResult;

}

int main()
{
  UINT iValue = 0;
  UINT ret = 0;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;

  ret = OffBit(iValue);
  cout<<"changed value is: "<<ret<<endl;
  return 0;
}