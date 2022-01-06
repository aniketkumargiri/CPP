#include <bits/stdc++.h>
using namespace std;

class Complex
{
    int real, imaginary;

public:
    void setData(int a, int b)
    {
        real = a;
        imaginary = b;
    }
    void getData()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }
};

int main()
{
    /*
    Complex c1;
    c1.setData(23, 45);
    c1.getData();
    */

    /*
    Complex c1;
    Complex *ptr = &c1;
    (*ptr).setData(56, 89);
    (*ptr).getData();
    */

    Complex *ptr = new Complex;
    ptr->setData(5, 49);
    ptr->getData();

    return 0;
}