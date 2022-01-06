#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int a, b;
        cin >> a >> b;

        int rem = a % b;
        cout << rem << endl;
    }

    return 0;
}