#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin,name);
    int count= name.length();
    cout <<count  <<endl;
    if(count%2==0)
    {
        cout<<"Even"  <<endl;
    }
    else
    {
        cout <<"odd"  <<endl;
    }
}