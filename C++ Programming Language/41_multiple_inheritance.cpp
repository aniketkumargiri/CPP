#include <bits/stdc++.h>
using namespace std;

// Syntax for inheriting in multiple inheritance
/*
class DerivedC: visibility-mode base1, visibility-mode base2
{
    class body of class "DerivedC"
};
*/
class Base1
{
protected:
    int base1_int;

public:
    void setBase1_int(int a)
    {
        base1_int = a;
    }
};

class Base2
{
protected:
    int base2_int;

public:
    void setBase2_int(int a)
    {
        base2_int = a;
    }
};

class Base3
{
protected:
    int base3_int;

public:
    void setBase3_int(int a)
    {
        base3_int = a;
    }
};

class Derived : public Base1, public Base2, public Base3
{
public:
    void show()
    {
        cout << "The value of base1 is " << base1_int << endl;
        cout << "The value of base2 is " << base2_int << endl;
        cout << "The value of base3 is " << base3_int << endl;
        cout << "The sum of these values is " << (base1_int + base2_int + base3_int) << endl;
    }
};
/*
The inherited Derived class will something like this 

Data members:
base1_int --> protected
base2_int --> protected
base3_int --> protected

Member functions:
setBase1_int() --> public
setBase2_int() --> public
setBase3_int() --> public
*/

int main()
{
    Derived ani;
    ani.setBase1_int(25);
    ani.setBase2_int(50);
    ani.setBase3_int(75);
    ani.show();

    return 0;
}