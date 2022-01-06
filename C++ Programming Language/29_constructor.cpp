#include <bits/stdc++.h>
using namespace std;

class COMPLEX
{
    int a, b;

public:
    // Creating a constructor
    COMPLEX(void); //constructor declaration
    void printNumber(void)
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

COMPLEX::COMPLEX(void)//-->This is a default constructor as it takes no parameters
{
    cout<<"Hello World!\n";
    a = 10;
    b = 5;
}
int main()
{
    COMPLEX c;
    c.printNumber();

    return 0;
}
/*
Constructor: It is a special member function with the same name as of the class.
1. It is used to initialise the objects of its class.
2. It is automatically invoked whenever an object is created.
3. It should be declared in the public section of the class.
4. They cannot return values and donot have return type.
5. It can have default arguments.
6. We cannot refer to their address.
 */
