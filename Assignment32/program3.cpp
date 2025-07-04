#include<iostream>
using namespace std;

typedef unsigned int UINT;

UINT OnBit(UINT iNo, UINT iPos)
{
  int iMask = 1 , iResult = 0;
  iMask = iMask << (iPos -1);
  
  
  iResult =  iNo | iMask ;
  return iResult;

}

int main()
{
  UINT iValue = 0, iLoc = 0;
  UINT ret = 0;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;
  cout<<"Enter the position: "<<endl;
  cin>>iLoc;
  ret = OnBit(iValue,iLoc);
  cout<<"changed value is: "<<ret<<endl;
  return 0;
}