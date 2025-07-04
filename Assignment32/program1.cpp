#include<iostream>
using namespace std;

typedef unsigned int UINT;
bool CheckBit(UINT iNo, int iPos)
{
  UINT iMask = 1,iResult = 0;
  bool bFlag = false;
  if(iPos > 32 || iPos < 1 )
  {
    cout<<"Invalid pos"<<endl;
    return false;
  }
  iMask = iMask << (iPos -1);
  iResult = iNo & iMask;
  if(iResult == iMask)
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  UINT iValue = 0,iLoc = 0;
  bool bRet = 0;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;
  cout<<"Enter the position: "<<endl;
  cin>>iLoc;

  bRet = CheckBit(iValue,iLoc);
  if(bRet == true)
  {
    cout<<"bit is on"<<endl;
  }
  else
  {
    cout<<"bit is off"<<endl;
  }
  return 0;
}