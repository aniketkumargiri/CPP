#include <bits/stdc++.h>
using namespace std;

class Base1
{

public:
    void greet()
    {
        cout << "How are you?\n";
    }
};

class Base2
{

public:
    void greet()
    {
        cout << "kaise ho?\n";
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2::greet();
    }
};

class B
{
public:
    void say()
    {
        cout << "Hello World\n";
    }
};

class D : public B
{
    int a;
    // D's new say method will overwrite base class's say() method 

public:
    void say()
    {
        cout << "Hello World Aniket\n";
    }
    // If there is no public function in this derived class D, then Hello World from the base class B will be inherited
};

int main()
{
    /*
    Ambiguity 1
    Base1 base1_obj;
    Base2 base2_obj;
    base1_obj.greet();
    base2_obj.greet();
    */
    Derived d;
    d.greet();

    // Ambiguity 2
    B b;
    b.say();
    D d;
    d.say();

    return 0;
}