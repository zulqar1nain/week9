
#include <iostream>
using namespace std;
main()
{
    int size = 4;
    string fruitsize[4] = {"peach", "apple", "guava", "watermelon"};
    int price[4] = {60, 70, 40, 30};
    bool isfound = false;
    float quantity;
    string fruit;
    cout << "Enter fruit: ";
    cin >> fruit;
    cout << "Enter quantity: ";
    cin >> quantity;

    float isprice;
    if (fruit == "peach" || fruit == "apple" || fruit == "guava" || fruit == "watermelon")
    {
        for (int idx = 0; idx < 4; idx++)
        {

            if (fruit == fruitsize[idx])
            {
                isprice = quantity * price[idx];
                break;
            }
        }
        cout << isprice;
    }
    else
    {
        cout << "The fruit is not avaliable!!";
    }
}