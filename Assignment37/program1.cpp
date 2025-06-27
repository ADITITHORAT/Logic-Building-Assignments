#include<iostream>
using namespace std;

class Array
{
  protected :
  int * Arr;
  int size;

  public:
  Array(int value = 10)
  {
    cout<<"Inside constructor"<<endl;
    this -> size = value;
    this -> Arr = new int[size];
  }

  Array(Array &ref)
  {
    cout<<"Inside copy constructor"<<endl;
    this -> size = ref.size;
    this -> Arr = new int [this -> size];

    for(int i = 0; i < size ; i++)
    {
      this -> Arr[i] = ref.Arr[i];
    }
  }

  ~Array()
  {
    cout<<"Inside destructor"<<endl;
    delete []Arr;
  }

  inline void Accept();
  inline void Display();
};

void Array :: Accept()
{
  cout<<"Please enter the values"<<endl;
  for(int i = 0; i< this -> size ; i++)
  {
    cin>>Arr[i];
  }
}

void Array :: Display()
{
  cout<<"Elements are: "<<endl;
  for(int i = 0;i<this -> size ;i++)
  {
    cout<<Arr[i]<<"\t";
  }
  cout<<endl;
}

class ArrSearch : public Array
{
  public:
  ArrSearch(int no = 10): Array(no) {}

  int Frequency(int);
  int SearchFirst(int);
  int SearchLast(int);
  int EvenCount();
  int OddCount();
  int SumAll();
};

int ArrSearch :: SearchFirst(int value)
{
  int i = 0;
  for(i = 0; i< size ;i++)
  {
    if(Arr[i]==value)
    {
      break;
    }
  }

  if(i == size)
  {
    return -1;
  }
  else
  {
    return i+1;
  }
}

int ArrSearch :: Frequency(int value)
{
  int iCnt = 0;
  for(int i = 0; i < size ;i++ )
  {
    if(Arr[i]==value)
    {
      iCnt++;
    }
  }
  return iCnt;
}

int ArrSearch ::SearchLast(int value)
{
  int iCnt = 0, iLast = 0;
  for(iCnt = 0 ;iCnt < size ;iCnt++)
  {
    if(Arr[iCnt] == value)
    {
      iLast = iCnt+1;
    }
  }


  return iLast;
  
}
int ArrSearch ::EvenCount()
{
 int iCount = 0, iCnt = 0; 
 for(iCnt = 0 ;iCnt < size ; iCnt++)
 {
    if((Arr[iCnt] % 2) == 0)
    {
      iCount++;
    }
 }
 return iCount;
}
int ArrSearch ::OddCount()
{
 int iCount = 0, iCnt = 0; 
 for(iCnt = 0 ;iCnt < size ; iCnt++)
 {
    if((Arr[iCnt] % 2) != 0)
    {
      iCount++;
    }
 }
 return iCount;
}
int ArrSearch ::SumAll()
{
  int iSum = 0, iCnt = 0;
  for(iCnt = 0 ; iCnt < size ; iCnt ++)
  {
    iSum = iSum + Arr[iCnt];
  }
  return iSum;
}

int main()
{
  cout<<"Inside main"<<endl;
  ArrSearch sobj1(5);
  sobj1.Accept();
  sobj1.Display();

  int iRet = sobj1.Frequency(11);
  cout<<"Frequency is :"<<iRet<<endl;
  iRet = sobj1.SearchFirst(11);
  cout<<"First occurance is : "<<iRet<<endl;


  iRet = sobj1.SearchLast(11);
  cout<<"Last occurance is : "<<iRet<<endl;
  iRet = sobj1.EvenCount();
  cout<<"Even count is : "<<iRet<<endl;
  iRet = sobj1.OddCount();
  cout<<"Odd count is : "<<iRet<<endl;
  iRet = sobj1.SumAll();
  cout<<"Sum of all elements is : "<<iRet<<endl;

}