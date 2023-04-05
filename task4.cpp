#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "enter size of array: ";
    cin >> size;
    int arrsize[size];
    bool isfound = false;
    float greater;
    float rem;
    for (int idx = 0; idx < size; idx++)
    {
        cout << "Enter number: ";
        cin >> arrsize[idx];

    }
    for (int idx = 0; idx < size; idx++)
    {
        if (arrsize[idx] > 9)
        {
            int idx = 0;
            while (arrsize[idx] > 0)
            {
                rem =arrsize[idx] % 10;
                rem =arrsize[idx] / 10;
            }
            idx++;
        }
        if (greater == 7 || arrsize[idx] == 7)
        {
            isfound = true;
            break;
        }
    }
    if (isfound == true)
    {
        cout << "Boom!!";
    }
    else
    {
        cout << "There is no 7 in the array";
    }
}