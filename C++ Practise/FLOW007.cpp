#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int num, rem, rev = 0;
        cin >> num;
        while (num != 0)
        {
            rem = num % 10;
            rev = (10 * rev) + rem;
            num = num / 10;
        }
        cout << rev << endl;
    }
    return 0;
}