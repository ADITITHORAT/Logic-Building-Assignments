#include<iostream>
using namespace std;

template <class T>

void Display(T value, int iSize)
{
  int iCnt = 0;
  for(iCnt = 0; iCnt < iSize ; iCnt++)
  {
    cout<<value<<"\t";
  }
  cout<<endl;
}

int main()
{
  Display('M',7);
  Display(11,3);
  Display(3.7,6);
  return 0;
}