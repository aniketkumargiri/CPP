#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n1, n2, r, hcf, lcm;
    cout << "Enter two numbers\n";
    cin >> n1 >> n2;
    // for (n1 > n2)
    int x = n1;
    int y = n2;
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
    hcf = (x * y) / lcm;
    cout << "LCM is: " << lcm;
    cout << endl;
    cout << "HCF is: " << hcf;

    return 0;
}