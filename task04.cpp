#include <iostream>
using namespace std;
main()
{
  int size;
  cout <<"Enter size of array: ";
  cin>>size;
  float numbers[size];
    for (int i =0; i<size; i++)
    {
        cout <<"Enter number: ";
        cin>>numbers[i];
    }
    for(int idx=size-1;idx>=0;idx =idx-1)
    {
        cout<<numbers[idx]  <<" ";
    }
}