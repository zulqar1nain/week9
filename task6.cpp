#include <iostream>
using namespace std;
main()
{
     int size, num,trans;
    bool found = false;
    cout << "Enter number of values you want to enter: ";
    cin >>size;
    cout<<"Enter number of odd and even transformation: ";
    cin>>trans;
    int number[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Number :";
        cin >> number[x];
        for (int y = 1; y <= trans; y++)
        {
            if (number[x] % 2 == 0)
            {
                number[x] = number[x] - 2;
            }
            else
            {
                number[x] = number[x] + 2;
            }
        }
    }
    for (int x = 0; x < size; x++)
    {
        cout << number[x] << " ";
    }
}
