#include <bits/stdc++.h>
using namespace std;

class Base
{
protected:
    int a;

private:
    int b;
};
/*
For a protected member:
                            Public derivation    Private derivation    Protected derivation
    1. Private members      Not Inherited        Not Inherited          Not Inherited
    2. Protected members     Protected            Private                 Protected
    3. Public members         Public              Private                  Protected
*/
class Derived : protected Base
{
};

int main()
{
    Base b;
    Derived d;
    // cout<<b.a<<endl; //-->protected
    // cout<<d.a<<endl; //-->protected

    return 0;
}