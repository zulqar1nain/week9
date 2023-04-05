#include <iostream>
using namespace std;
int main()
{
    int size;
    cout << "Enter array size: " << endl;
    cin >> size;
    int num[size];
    int number;
    for (int x = 0; x < size; x++)
    {
        cout << "Enter Number: ";
        cin >> num[x];
    }
    int num1 = num[0];
    for (int idx = 0; idx < size; idx = idx + 1)
    {

        if (num[idx] < num1)
        {
            num1 = num[idx];
        }
    }
    cout << num1;
}