#include <iostream>
using namespace std;
main()
{
    string name; 
    cout <<"Enter name: ";
    cin>>name;
    
    int size=name.length();
   if (size % 2 == 0)
   {
    cout<<"True";
   }
   else{
    cout<<"False";
   }
}