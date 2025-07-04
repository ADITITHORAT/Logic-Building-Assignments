#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  int iMask = 0x000001C0; 
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
    cout<<" 7th and 8th and 9th  bit is on"<<endl;
  }
  else
  {
    cout<<"7th and 8th and 9th  is off"<<endl;
  }
  return 0;

}