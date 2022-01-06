#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 0, b = 1, c, n;
    cin >> n;
    cout << a << endl
         << b << endl;
    for (int i = 2; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;
        cout << c << endl;
    }

    return 0;
}