#include <iostream>
using namespace std;
main()
{
    int size, seconds;
    cout << "Enter number of Colors you are Using: ";
    cin >> size;
    string colour[size];
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Colours :";
        cin >> colour[x];
    }
    seconds = size * 2;
    int a = 1;
    for (int x = 0; x < size; x++)
    {
        if ((x+1) < size)
        {
            if (colour[x] != colour[x + 1])
            {
                seconds = seconds + 1;
            }
        }
        }
    cout << seconds;
}