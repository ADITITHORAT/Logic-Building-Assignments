#include<iostream>
using namespace std;

typedef unsigned int UINT;
UINT Toggle(UINT iNo)
{
  int iMask = 0,iResult = 0;
  iMask = 0xF000000F;
  
  iResult = iNo ^ iMask;
  return iResult;
}

int main()
{
  UINT iValue = 0;
  UINT ret = 0;

  cout<<"Enter the number: "<<endl;
  cin>>iValue;

  ret = Toggle(iValue);
  cout<<"changed value is : "<<ret<<endl;
  return 0;
}