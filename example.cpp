#include <iostream>
using namespace std;
main()
{
    int size;
    cout <<"Enter size of array: ";
    cin>>size;
     float cgpa[size];
    // cgpa[0]=10;
    // cgpa[1]=1;
    // cgpa[2]=2;
    // cgpa[3]=3;
    // cgpa[4]=5;
    for(int index=0;index<5;index=index+1)
    {
        cout<<"Enter value: ";
        cin>>cgpa[index];
    }
    for(int index=0;index<5;index++)
    {
        cout<<"Cgpa is"  <<index  <<"The index of: "  <<cgpa[index]  <<endl;
    }
    //  cout <<"CGPA of student at 0th index: "  <<cgpa[0]  <<endl;
    //  cout <<"CGPA of student at 1th index: "  <<cgpa[1]  <<endl;
    //  cout <<"CGPA of student at 2th index: "  <<cgpa[2]  <<endl;
    //  cout <<"CGPA of student at 3th index: "  <<cgpa[3]  <<endl;
    //  cout <<"CGPA of student at 4th index: "  <<cgpa[4]  <<endl;


}