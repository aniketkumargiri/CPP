#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // int x = 34;
    // cout << "The value of x is " << x << endl;
    // x = 45;
    // cout << "The value of x is " << x << endl;

    //value of constants cannot be reinitialised or change
    // char const ch = 'a';
    // cout << "The value of ch is " << ch << endl;

    int a = 3, b = 90, c = 2325;
    // cout << "\nthe value of a without setw is: " << a << endl;
    // cout << "the value of b without setw is: " << b << endl;
    // cout << "the value of c without setw is: " << c << endl;

    // #include<iomanip>
    // cout << "\nthe value of a with setw is: " << setw(4) << a << endl;
    // cout << "the value of b with setw is: " << setw(4) << b << endl;
    // cout << "the value of c with setw is: " << setw(4) << c << endl;

    //operator precedance :
    a = 8, b = 10;
    c = (a * 5) - (b / 5) + ((9 * 4) / 2);
    cout << "\nThe value of c is " << c << endl;
    c = ((((a * 5) + b) - 45) + 87);
    cout << "The value of c is " << c << endl;

    return 0;
}