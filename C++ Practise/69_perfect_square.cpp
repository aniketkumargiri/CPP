#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int s = sqrt(n);
    if (s * s == n)
        cout << "number is perfect square\n";
    else
        cout << "number is not perfect square\n";

    return 0;
}