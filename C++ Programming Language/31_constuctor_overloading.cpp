#include <bits/stdc++.h>
using namespace std;

class COMPLEX
{
    int a, b;

public:
    //multiple constructors in the same class
    COMPLEX(int x, int y) //parameterised constructors
    {
        a = x;
        b = y;
    }
    COMPLEX(int x) //parameterised constructors
    {
        a = x;
        b = 0;
    }
    COMPLEX() //default constructors
    {
        a = 0;
        b = 0;
    }
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};
int main()
{
    COMPLEX c1(4, 6);
    c1.printNumber();

    COMPLEX c2(5);
    c2.printNumber();

    COMPLEX c3;
    c3.printNumber();

    return 0;
}