#include <bits/stdc++.h>
using namespace std;

class Number
{
    int a;

public:
    Number()
    {
        a = 0;
    }

    Number(int num)
    {
        a = num;
    }

    Number(Number &obj)
    {
        cout << "Copy constructor called!!!\n";
        a = obj.a;
    }

    void display()
    {
        cout << "The number for this object is " << a << endl;
    }
};

int main()
{
    Number x, y, z(45), z2;
    x.display();
    y.display();
    z.display();

    // z1 should exactly resemble z or y
    Number z1(z);//copy constructor invoked
    z1.display();

    z2 = z;//copy constructor not called
    z2.display();

    Number z3 = z;//copy constructor invoked
    z3.display();

    return 0;
}
/*
-->Compiler allocates a default copy constructor to each of the class.

-->If there is a copy constructor, that will execute; otherwise compiler runs it's default copy constuctor
*/