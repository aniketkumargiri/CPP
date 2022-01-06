#include <bits/stdc++.h>
using namespace std;

int main()
{
    /*
    for (int i = 1; i <= 100; i++)
    {
        if (i % 2 == 0)
        {
            cout << "Even\n";
        }
        else
        {
            cout << "Odd\n";
        }
    }
    */
    cout << "Odd numbers are as follows\n";
    for (int i = 1; i < 100; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Odd numbers in reverse are as follows\n";
    for (int i = 99; i >= 1; i -= 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even numbers are as follows\n";
    for (int i = 2; i <= 100; i += 2)
    {
        cout << i << " ";
    }
    cout << endl;

    cout << "Even numbers in reverse are as follows\n";
    for (int i = 100; i >= 2; i -= 2)
    {
        cout << i << " ";
    }

    return 0;
}