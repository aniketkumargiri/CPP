#include <bits/stdc++.h>
using namespace std;

class simpleCalculator
{
    int a, b;

public:
    void getDataSimple()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
    }
    void performOperationSimple()
    {
        cout << "The value of a + b is " << a + b << endl;
        cout << "The value of a - b is " << a - b << endl;
        cout << "The value of a * b is " << a * b << endl;
        cout << "The value of a / b is " << a / b << endl;
    }
};

class scientificCalculator
{
    int a, b;

public:
    void getDataScientific()
    {
        cout << "Enter the value of a ";
        cin >> a;
        cout << "Enter the value of b ";
        cin >> b;
    }
    void performOperationScientific()
    {
        cout << "The value of sin(a) is " << sin(a) << endl;
        cout << "The value of cos(b) is " << cos(b) << endl;
        cout << "The value of exp(a) is " << exp(a) << endl;
        cout << "The value of log(b) is " << log10(b) << endl;
    }
};

class HybridCalculator : public simpleCalculator, public scientificCalculator
{
};

int main()
{
    /*
    simpleCalculator calc;
    calc.getDataSimple();
    calc.performOperationSimple();

    scientificCalculator cals;
    cals.getDataScientific();
    cals.performOperationScientific();
    */

    HybridCalculator cal;
    cal.getDataSimple();
    cal.performOperationSimple();
    cout<<endl;
    cal.getDataScientific();
    cal.performOperationScientific();

    return 0;
}