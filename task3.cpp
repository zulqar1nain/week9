#include <iostream>
#include <conio.h>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    int count= name.length();
    cout<<count <<endl;
    if (count%2==0)
    {
    cout <<"true";
    }
    else
    {
    cout<<"False";
    }
}