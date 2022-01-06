#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    char ch;

    for (int i = 1; i <= n; i++)
    {
        ch = 'a';
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << ch;
                ch++;
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