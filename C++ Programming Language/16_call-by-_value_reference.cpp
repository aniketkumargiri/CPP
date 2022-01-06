#include <bits/stdc++.h>
using namespace std;

// type function-name(arguments)
void swap(int, int);
void swapPtr(int *, int *);
void swapRefVar(int &, int &);
//semi-colon is must using function proto-type

int &swapReferenceVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;

    return b;
}

int main()
{
    int num1, num2; // num1, num2 are actual para-meters
    cout << "enter first number " << endl;
    cin >> num1;
    cout << "enter second number " << endl;
    cin >> num2;

    // cout << "\nIn call by value:\n";
    // swap(num1, num2);
    // cout << "After swapping, the value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;

    // cout << "\nIn call by address:\n";
    // swapPtr(&num1, &num2);
    // cout << "After swapping, the value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;

    // cout << "\nIn call by reference:\n";
    // swapRefVar(num1, num2);
    // cout << "After swapping, the value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;

    swapReferenceVar(num1, num2) = 823;
    cout << "\nThe value of num1 is " << num1 << " and the value of num2 is " << num2 << endl;

    return 0;
}

//change in formal parameters doesnot affect the actual parameters in call by value
void swap(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}

//change in formal parameters affects the actual parameters in call by address
void swapPtr(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

//change in formal parameters affects the actual parameters in call by reference
void swapRefVar(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
