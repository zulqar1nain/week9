#include <iostream>
using namespace std;
main()
{
    int totalprice;
    int price = 500;
    bool isfound = false;
    string movies;
    cout << "Enter movies: ";
    cin >> movies;
    int size = 5;
    string arr[size] = {"Gladiator", "StarWars", "Terminator", "TakingLives", "TombRider"};

    for (int idx = 0; idx < 5; idx++)
    {
        if (movies == arr[idx])
        {
            if (idx % 2 == 0)
            {
                isfound = true;
                cout << idx << endl;
            }
            else if (idx%2!=0)
            {
                isfound=false;
                cout<<idx<<endl;
            }
        }
    }

    if (isfound == true)
    {
        totalprice = 500 * 0.05;
        totalprice = price - totalprice;
    }
    else if (isfound == false)
    {
        totalprice = price-(price*0.10);
    }
    cout << "Price After Discount: " << totalprice;
}
