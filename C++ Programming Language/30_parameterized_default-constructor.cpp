#include <bits/stdc++.h>
using namespace std;

class COMPLEX
{
    int a, b;

public:
    COMPLEX(int,int);//constructor declaration
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

COMPLEX::COMPLEX(int x,int y)//-->This is a parameterized constructor as it accepts parameters
{
    a = x;
    b = y;
}
int main()
{
    //Implicit call
    COMPLEX c(4,6);
    c.printNumber();

    //Explicit call
    COMPLEX d=COMPLEX(5,7);
    d.printNumber();

    return 0;
}