#include <iostream>
using namespace std;
int main()
{
    float quarters,dimes,nickels,pennies;
    float quartersindollars,dimesindollars,nickelsindollars,penniesindollars;
    float total;
    float due;
    cout <<"Enter due: ";
    cin>>due;
    cout<<"Enter quarters: ";
    cin>>quarters;
    cout<<"Enter dimes: ";
    cin>>dimes;
    cout<<"Enter nickels: ";
    cin>>nickels;
    cout<<"Enter pennies: ";
    cin>>pennies;
    quartersindollars=quarters*0.25;
    dimesindollars=dimes*0.10;
    nickelsindollars=nickels*0.05;
    penniesindollars=pennies*0.01;
    total=quartersindollars+dimesindollars+nickelsindollars+penniesindollars;
     if(total>due)
     {
        cout<<"true";
     }
     else
     {
        cout <<"False";
     }
}
