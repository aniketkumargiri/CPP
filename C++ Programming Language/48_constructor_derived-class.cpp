#include <bits/stdc++.h>
using namespace std;

/*
Case1:
class B: public A{
    //order of executiton of constructor --> first A() then B()
};

Case2:
class A: public B, public C{
    //order of executition of constructor --> first B() then C() and A()
};

Case3:
class A: public B, virtual public C{
    //order of executition of constructor --> first C() then B() and A()
};
*/
class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printDataBase1()
    {
        cout << "The value of data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printDataBase2()
    {
        cout << "The value of data2 is " << data2 << endl;
    }
};

class Derived : public Base1, public Base2
{
    int d1, d2;

public:
    Derived(int a, int b, int c, int d) : Base1(a), Base2(b)
    {
        d1 = c;
        d2 = d;
        cout << "Derived class constructor called" << endl;
    }
    void printDataDerived()
    {
        cout << "The value of d1 is " << d1 << endl;
        cout << "The value of d2 is " << d2 << endl;
    }
};

int main()
{
    Derived ani(1,2,3,4);
    ani.printDataBase1();
    ani.printDataBase2();
    ani.printDataDerived();
    return 0;
}