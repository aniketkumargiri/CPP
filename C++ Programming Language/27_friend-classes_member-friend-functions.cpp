#include <bits/stdc++.h>
using namespace std;

//Forward declaration
class COMPLEX;

class calculator
{
public:
    int add(int a, int b)
    {
        return (a + b);
    }

    int sumRealComplex(COMPLEX, COMPLEX);
    int sumImaginaryComplex(COMPLEX, COMPLEX);
};

class COMPLEX
{
    int a, b;
    // Individually declaring functions as friends 
    friend int calculator ::sumRealComplex(COMPLEX o1, COMPLEX o2);
    friend int calculator ::sumImaginaryComplex(COMPLEX o1, COMPLEX o2);

    // Aliter: Declaring the entire calculator class as friend 
    // friend class calculator;

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

int calculator:: sumRealComplex(COMPLEX o1, COMPLEX o2)
{
    return (o1.a + o2.a);
}

int calculator:: sumImaginaryComplex(COMPLEX o1, COMPLEX o2)
{
    return (o1.b + o2.b);
}

int main()
{
    COMPLEX o1,o2;
    o1.setNumber(1,4);
    o2.setNumber(2,7);

    calculator calc;
    int resR=calc.sumRealComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<resR<<endl;

    int resC=calc.sumImaginaryComplex(o1,o2);
    cout<<"The sum of real part of o1 and o2 is "<<resC<<endl;

    return 0;
}