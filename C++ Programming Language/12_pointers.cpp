#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 3;
    int *b = &a; // (&)--> (Address of) operator // (*)--> dereference operator 
    // cout << "the address of a is " << &a << endl;
    // cout << "the address of a is " << b << endl;
    // cout << "the value of a is " << a << endl;
    // cout << "the value at address b is " << *b << endl;

    // pointer to pointer 
    int **c = &b;
    cout << "\nthe address of b is " << &b << endl;
    cout << "the address of b is " << c << endl;
    cout << "the value at address c is " << c << endl;
    cout << "the value at address value_at(value_at(c)) is " << *c << endl;
    cout << "the value of a is " << **c << endl;

    return 0;
}

// Pointer is a data type which holds the address of other data types