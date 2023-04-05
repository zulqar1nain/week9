#include <iostream>
using namespace std;
main()
{
    int size;
    cout << "Enter size of array: ";
    cin >> size;

    int arr[size];
    // int arrsize = 5;
    bool isbool = false;
    int num;
     cout <<"enter number: ";
    cin>>num;
    for (int idx = 0; idx < size; idx++)
    {

        cout << "Enter number : ";
        cin >> arr[idx];
    }
    for (int m = 0; m < size; m++)
    {
        if (num == arr[m])
        {
            isbool = true;
            break;
        }
        isbool = false;
    }
    if (isbool == true)
    {
        cout << "number matched" << endl;
    }
    else
    {
        cout << "number is not matched" << endl;
    }
}
