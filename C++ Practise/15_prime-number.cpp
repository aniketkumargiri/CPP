#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    int flag = 1;
    cout << "Enter a number\n";
    cin >> n;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            flag = 0;
            break;
        }
    }
    if (flag)
    {
        cout << "Prime\n";
    }
    else
    {
        cout << "Not prime\n";
    }

    return 0;
}