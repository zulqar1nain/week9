#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter size of array: ";
    cin>>size;
    int numbers[size];
    int num;
    cout <<"Enter number: ";
    cin>>num; 
    for(int idx=0; idx<size;idx=idx+1)
    {
        cout <<"Enter index: "  <<endl;
        cin>>numbers[idx];
        int total =num*numbers[idx];
        cout <<total;
    }
}