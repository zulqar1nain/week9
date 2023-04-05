#include <iostream>
using namespace std;
main()
{
    string name;
    getline(cin, name);
    char letter;
    cout << "Enter letter: ";
    cin >> letter;
    int idx = 0;
    bool isfound=false;
    while (name[idx] != '\0')
    {

        if (name[idx] == letter)
        {
            isfound = true;
        }
       /* else
        {
            isfound = false;
        }*/
        idx = idx + 1;
    }
    if (isfound == true)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
}