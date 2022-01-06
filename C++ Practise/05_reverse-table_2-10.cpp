#include <bits/stdc++.h>
using namespace std;

int main()
{
    for (int i = 2; i <= 10; i++)
    {
        for (int j = 10; j >= 1; j--)
        {
            cout << i * j << " ";
        }
        cout << endl;
    }

    return 0;
}