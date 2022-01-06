#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        int k = 1;
        for (int j = 1; j <= 2 * n - 1; j++)
        {
            if (j >= (n + 1 - i) && j <= (n - 1 + i) && k==1)
            {
                cout << "*";
                k = 0;
            }
            else
            {
                cout << " ";
                k = 1;
            }
        }
        cout << endl;
    }

    return 0;
}