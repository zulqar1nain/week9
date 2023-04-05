#include <iostream>
using namespace std;
main()
{
    int size=4;
    bool isfound=false;
    //int arrsize[4];
    string word[4];
    for(int idx =0;idx<4;idx++)
    {
        cout <<"Enter word: ";
        cin>>word[idx];
    }
    for(int idx =0;idx<4;idx++)
    {
        if(word[idx]==word[idx+1])
        {
            isfound = true;
            break;
        }
    }
    if(isfound==true)
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
}