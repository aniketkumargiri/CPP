#include <bits/stdc++.h>
using namespace std;

class Employee
{
    int id;
    static int count;
    // count is the static data member of class Employee

public:
    void setData(void)
    {
        cout << "enter id ";
        cin >> id;
        count++;
    }
    void getData(void)
    {
        cout << "The id of this employee is " << id << " and this is employee number " << count << endl;
    }
    static void getCount(void)
    {
        // cout<<id;-->static members functions are excessible by static variables only, throws error
        cout << "The value of count is " << count << endl;
    }
};

int Employee::count = 1000; //default value is zero

int main()
{
    Employee ani, kr, giri;
    // ani.id=1;-->private
    // ani.count=1;-->private
    ani.setData();
    ani.getData();
    Employee::getCount();

    kr.setData();
    kr.getData();
    Employee::getCount();

    giri.setData();
    giri.getData();
    Employee::getCount();

    return 0;
}