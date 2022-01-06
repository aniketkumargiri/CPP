#include <bits/stdc++.h>
using namespace std;

class Employee
{
private: //by default
    int a, b, c;

public:
    int d, e;
    void setData(int a, int b, int c); //Declaration
    void getData()
    {
        cout << "the value of a is " << a << endl;
        cout << "the value of b is " << b << endl;
        cout << "the value of c is " << c << endl;
        cout << "the value of d is " << d << endl;
        cout << "the value of e is " << e << endl;
    }
};

void Employee ::setData(int a1, int b1, int c1)
{
    a = a1;
    b = b1;
    c = c1;
}

int main()
{
    Employee ani;
    // ani.a=12; -->a is private, this will throw error
    ani.d = 23;
    ani.e = 44;

    ani.setData(1, 2, 4);
    ani.getData();
    
    return 0;
}