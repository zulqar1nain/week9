#include <iostream>
using namespace std;
main()
{
    float array[2];

    for (int x = 0; x < 2; x++)
    {
        cout << "Enter number:";
        cin >> array[x];
    }

 int size;
 cout << "Enter array size: ";
 cin >> size;
 float arrsize[size];
 for (int idx = 0; idx < size; idx++)
 {
    cout << "Enter Numbers: ";
    cin >> arrsize[idx];
 }
 cout<< array[0];
 for (int idx = 0; idx < size; idx++)
 {
    cout << arrsize[idx];
 }
 cout<<array[1];

}