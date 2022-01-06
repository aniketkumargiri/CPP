#include <bits/stdc++.h>
using namespace std;

// Factorial of a number
// 0! = 1
// 1! = 1
// n! = n * (n - 1)!
int fact(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return n * fact(n - 1);
}

int fib(int n)
{
    if (n <= 1)
    {
        return 1;
    }
    return fib(n - 1) + fib(n - 2);
}

int main()
{
    int n;
    cout << "enter a number\n";
    cin >> n;

    // int factorial = fact(n);
    // cout << "The factorial of " << n << " is " << factorial << endl;

    int fibonacii = fib(n);
    cout << "The term in fibonacii sequence at position " << n << " is " << fibonacii << endl;

    return 0;
}