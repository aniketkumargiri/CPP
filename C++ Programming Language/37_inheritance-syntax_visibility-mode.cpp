#include <bits/stdc++.h>
using namespace std;

// Base Class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        int id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Derived class
/*
class {{derived-class-name}}: {{visibility-mode}} {{base-class-name}}
{
    class members/methods/etc...
};
1.Default visibility mode is private
2.Public visibility Mode: Public members of the base class becomes public members of the derived class
3.Private visibility Mode: Public members of the base class becomes private members of the derived class
4.Private are never inherited
*/

// Creating a programmer class derived from Employee Base class
class Programmer : public Employee
{
public:
    int languageCode = 9;
    Programmer(int inpId)
    {
        id = inpId;
    }

    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee ani(1), giri(2);
    cout << ani.salary << endl;
    cout << giri.salary << endl;

    Programmer skillf(1);
    skillf.getData();
    cout << skillf.languageCode << endl;
    cout << skillf.id << endl; //-->Executed when inherited public

    return 0;
}