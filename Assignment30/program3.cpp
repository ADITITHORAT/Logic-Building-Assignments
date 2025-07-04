#include<iostream>
using namespace std;

typedef unsigned int UINT;

bool CheckBit(UINT iNo)
{
  int iMask = 0x08104040; 
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
    cout<<" 7th and 15th and 21th and 28th bit is on"<<endl;
  }
  else
  {
    cout<<"7th and 15th and 21th and 28th is off"<<endl;
  }
  return 0;

}