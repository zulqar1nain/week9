#include <iostream>
using namespace std;
main()
{
   string name;
   getline(cin,name);
   int idx=0;
   while(name[idx]!='\0')
   {
    cout <<name[idx]  <<" at index "  << idx <<endl;
    idx=idx+1;
   }
     cout <<idx;
}