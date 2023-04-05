#include <iostream>
using namespace std;
main()
{
     int size;
    cout <<"Enter size of array: ";
    cin>>size;
     float cgpa[size];
     for(int index=0;index<size;index=index+1)
    {
        cout<<"Enter value: ";
        cin>>cgpa[index];

    }
     for(int index=0;index<size;index++)
     {
     cout<<cgpa[index] <<" ";
     }

}