#include <bits/stdc++.h>
using namespace std;

class BaseClass
{
public:
    int var_base;
    void display()
    {
        cout << "1_Displaying Base class variable var_base " << var_base << endl;
    }
};

class DerivedClass : public BaseClass
{
public:
    int var_derived;
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

    base_class_pointer->var_base = 34;
    // base_class_pointer->var_derived = 134; //Will throw an error because pointer is of Base Class
    base_class_pointer->display();
    cout << endl;

    DerivedClass *derived_class_pointer;
    derived_class_pointer = &obj_derived;
    
    derived_class_pointer->var_base = 34;
    derived_class_pointer->var_derived = 134;
    derived_class_pointer->display();

    return 0;
}