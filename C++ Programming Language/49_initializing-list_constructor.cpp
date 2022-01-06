#include <bits/stdc++.h>
using namespace std;

/*
Syntax for initialization list in  constructor:
contructor (ardument-list): initialization-section
{
    assignment + other code;
}
*/
class Test
{
    int a;
    int b;

public:
    // Test(int i, int j) : a(i), b(j)
    // Test(int i, int j) : a(i), b(i + j)
    // Test(int i, int j) : a(i), b(2 * j)
    // Test(int i, int j) : a(i), b(a * j)
    // Test(int i, int j) : b(j), a(i + b)//-->This will return garbage value because a will initialise first
    // Test(int i, int j) : a(j), b(a + i)
    Test(int i, int j) : a(i)
    {
        b = j;
        cout << "Constructor executed\n";
        cout << "Value of a is " << a << endl;
        cout << "Value of b is " << b << endl;
    }
};

int main()
{
    Test t(4, 5);

    return 0;
}