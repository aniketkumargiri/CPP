#include <bits/stdc++.h>
using namespace std;

struct employee
{
    int id;       //4
    char favchar; //1
    float salary; //4
};                //total memory used=9

/*
typedef struct employee
{
    int id;       
    char favchar; 
    float salary;
} ep;             
*/

union money
{
    int rice;     //4
    char car;     //1
    float pounds; //4
};                //maximum memory used=4

int main()
{
    /*
    ep ani = {2, 'g', 2000};
    ep kr = {7, 's', 5000};
    ep giri = {9, 'k', 20000};
    */

    // struct employee ani = {2, 'g', 2000};
    /*
    ani.id=1;
    ani.favchar='a';
    ani.salary=1000;
    */
    // cout << "The value is " << ani.id << endl;
    // cout << "The value is " << ani.favchar << endl;
    // cout << "The value is " << ani.salary << endl;
    // cout << endl;

    // struct employee kr = {7, 's', 5000};
    // cout << "The value is " << kr.id << endl;
    // cout << "The value is " << kr.favchar << endl;
    // cout << "The value is " << kr.salary << endl;
    // cout << endl;

    // struct employee giri = {9, 'k', 20000};
    // cout << "The value is " << giri.id << endl;
    // cout << "The value is " << giri.favchar << endl;
    // cout << "The value is " << giri.salary << endl;
    // cout << endl;

    // In union, only one value can be initialised and executed accurately and successfully. Therefore, union provides a better memory management
    // union money m;
    // m.rice = 34;
    // cout << m.rice << endl;
    // m.car = 'c';
    // cout << m.car << endl;
    // m.pounds = 30.5;
    // cout << m.pounds << endl;
    // cout << endl;

    // enum meal
    // {
    //     breakfast,
    //     lunch,
    //     dinner
    // };
    // cout << breakfast << endl;
    // cout << lunch << endl;
    // cout << dinner << endl;

    // meal m1 = lunch;
    // cout << m1 << endl;
    // cout << (m1 == 1) << endl; //true=1
    // cout << (m1 == 2) << endl; //false=0

    // meal m2 = dinner;
    // cout << m2 << endl;

    enum days
    {
        sunday = 7,
        monday = 1,
        tuesday = 2,
        wednesday = 3,
        thursday = 4,
        friday = 5,
        saturday = 6
    };

    cout << tuesday << endl;

    days tday = tuesday;
    tday = sunday;
    cout << tday << endl;

    return 0;
}
