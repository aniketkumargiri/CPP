#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, r, lcm;
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;
    // for (n1 > n2)
    while (true)
    {
        lcm = n1;
        r = n1 % n2;
        if (r == 0)
        {
            break;
        }
        n1 = n1 * 2;
    }
    cout << "LCM is: " << lcm;

    return 0;
}