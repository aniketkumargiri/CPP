#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j == (i - n + 1) || i == n || j == (n + 1 - i) || j == n)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    return 0;
}