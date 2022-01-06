#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int rem, sum = 0;
    int num = n;
    while (n > 0)
    {
        rem = n % 10;
        sum += rem * rem * rem;
        n = n / 10;
    }
    if (sum == num)
    {
        cout << "Number is Armstrong\n";
        // eg: 153 = (1 * 1 * 1) + (5 * 5 * 5) + (3 * 3 * 3);
    }
    else
    {
        cout << "Number is not a Armstrong number\n";
    }

    return 0;
}