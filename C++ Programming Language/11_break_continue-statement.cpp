#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // break statement 
    // for (int i = 0; i < 10; i++)
    // {
    //     if (i == 3)
    //     {
    //         break;
    //     }
    //     cout << i << " ";
    // }
    // cout << endl;

    // continue statement 
    for (int i = 0; i < 10; i++)
    {
        if (i == 3 || i == 7)
        {
            continue;
        }
        cout << i << " ";
    }
    cout << endl;

    return 0;
}
