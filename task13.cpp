#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter resistance: ";
    cin >> size;
    float arr[size];
    int sum = 0;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter number: ";
        cin >> arr[x];
    }
    for (int idx = 0; idx < size; idx++)
    {
        sum = sum + arr[idx];
    }
    cout << sum;
}