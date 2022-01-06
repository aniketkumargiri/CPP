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
        sum = sum * 10 + rem;
        n = n / 10;
    }
    if (sum == num)
    {
        cout << "Number is palindrome\n";
    }
    else
    {
        cout << "Number is not a palindrome number\n";
    }

    return 0;
}