#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cout << "enter your age" << endl;
    cin >> age;

    // Selection control structure: if-else ladder
    /*
    if ((age < 18) && (age > 0_))
    {
        cout << "you cannot come to the party\n";
    }
    else if (age == 18)
    {
        cout << "you are a kid and you will get a kid pass to the party\n";
    }
    else if (age <= 0)
    {
        cout << "you are not yet born!!\n";
    }

    else
    {
        cout << "you can come to the party\n";
    }
    */

    // Selection control structure: switch case:
    switch (age)
    {
    case 0:
        cout << "you are 0; cannot come to the party\n";
        break;
    case 12:
        cout << "you are 12;you are a child\n";
        break;
    case 18:
        cout << "you are 18;can come to the children party\n";
        break;
    case 54:
        cout << "you are 54;can come to the party\n";
        break;

    default:
        cout << "default: none of the given mentioned age\n";
        break;
    }

    return 0;
}
