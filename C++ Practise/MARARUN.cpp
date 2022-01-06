#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    int D, d, A, B, C;
    cin >> T;
    while (T--)
    {
        cin >> D >> d >> A >> B >> C;
        if (d * D >= 10 && d * D < 21)
        {
            cout << A << endl;
        }
        else if (d * D >= 21 && d * D < 42)
        {
            cout << B << endl;
        }
        else if (d * D >= 42)
        {
            cout << C << endl;
        }
        else
        {
            cout << '0' << endl;
        }
    }

    return 0;
}