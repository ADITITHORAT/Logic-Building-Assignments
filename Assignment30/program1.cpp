#include<iostream>
using namespace std;

typedef unsigned int UINT;
// check 15th bit is on or off 
bool CheckBit(UINT iNo)
{
  int iMask = 0x00004000;
  int iResult = iMask & iNo ;
  if(iResult == iMask)
  {
    return false;
  }
  else
  {
    return true;
  }

}
int main()
{
  UINT iValue = 0;
  bool bRet = false;
  cout<<"Enter the number: "<<endl;
  cin>>iValue;

  bRet = CheckBit(iValue);

  if(bRet == false)
  {
    cout<<"15th bit is on"<<endl;
  }
  else
  {
    cout<<"15th bit is off"<<endl;
  }
  return 0;

}