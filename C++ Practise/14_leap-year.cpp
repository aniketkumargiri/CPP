#include <bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cout << "Enter a year\n";
    cin >> y;
    if (y % 4 == 0 && y % 100 == 0 && y % 400 == 0)
    {
        cout << "Leap year\n";
    }
    else if (y % 4 == 0 && y % 100 == 0 && y % 400 != 0)
    {
        cout << "Not leap year\n";
    }
    else if (y % 4 == 0 && y % 100 != 0 && y % 400 != 0)
    {
        cout << "Leap year\n";
    }
    else{
        cout<<"Not leap year\n";
    }

    return 0;
}