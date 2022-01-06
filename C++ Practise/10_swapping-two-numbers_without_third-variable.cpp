#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b;
    cout << "Before swapping ";
    cin >> a >> b;
    a = a + b;
    b = a - b;
    a = a - b;
    cout << "After swapping " << a << " " << b;
    return 0;
}