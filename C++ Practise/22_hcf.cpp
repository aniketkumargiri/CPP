#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, r, hcf;
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;
    // for (n1 > n2)
    while (true)
    {
        hcf = n2;
        r = n1 % n2;
        n1 = n2;
        n2 = r;
        if (n2 == 0)
        {
            break;
        }
    }
    cout << "HCF is: " << hcf;

    return 0;
}