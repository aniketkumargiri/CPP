#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cout << "Enter a number\n";
    cin >> n;
    int rem, sum = 0;
    while (n > 0)
    {
        rem = n % 10;
        sum =sum*10+ rem;
        n = n / 10;
    }
    cout << "Reverse of number is: " << sum;

    return 0;
}