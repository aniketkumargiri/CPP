#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    int salary;

public:
    void setId(void)
    {
        salary = 22;
        cout << "enter the id of employee " << endl;
        cin >> id;
    }
    void getId(void)
    {
        cout << "The id of this employee is " << id << endl;
    }
};

int main()
{
    // Employee ani,kr,giri,ket;
    // ani.setId();
    // ani.getId();

    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }

    return 0;
}