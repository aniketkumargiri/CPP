#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a, b, c;
    cout << "Before swapping ";
    cin >> a >> b;
    c = a;
    a = b;
    b = c;
    cout << "After swapping " << a << " " << b;
    return 0;
}