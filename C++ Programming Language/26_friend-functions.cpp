#include <bits/stdc++.h>
using namespace std;

class COMPLEX
{
    int a, b;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    friend COMPLEX sumComplex(COMPLEX o1, COMPLEX o2);
    // friend allows another function outside the class to excess the private data of the class

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

COMPLEX sumComplex(COMPLEX o1, COMPLEX o2)
{
    COMPLEX o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    COMPLEX c1, c2, sum;
    c1.setNumber(1, 4);
    c2.setNumber(5, 8);

    c1.printNumber();
    c2.printNumber();

    sum = sumComplex(c1, c2);
    sum.printNumber();
    return 0;
}
/*
properties of friend functions
1. Not in the scope of class 
2. So, it cannot be called from the object of that class. c1.sumComplex==Invalid
3. Can be invoked without the help of any object
4. Usually contains the objects as argument
5. Can be declared inside public or private section of the class
6. It cannot accsess the members directly by their names and need object_name.member_name to access any member.
7. It may be declared in private or public section of the class
*/