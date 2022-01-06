#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base;
    virtual void display()
    {
        cout << "1_Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived = 100;
    void display()
    {
        cout << "2_Displaying Base class variable var_base " << var_base << endl;
        cout << "2_Displaying Derived class variable var_derived " << var_derived << endl;
    }
};

int main()
{
    BaseClass *base_class_pointer;
    BaseClass obj_base;
    DerivedClass obj_derived;
    base_class_pointer = &obj_derived; //Pointing base class pointer to derived class

    base_class_pointer->display();
    cout << endl;

    return 0;
}