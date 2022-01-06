#include <bits/stdc++.h>
using namespace std;

template <class T1 = int, class T2 = float, class T3 = char, class T4 = string>
class ani
{
public:
    T1 a;
    T2 b;
    T3 c;
    T4 d;
    ani(T1 x, T2 y, T3 z, T4 w)
    {
        a = x;
        b = y;
        c = z;
        d = w;
    }
    void display()
    {
        cout << "The value of a is " << a << endl;
        cout << "The value of b is " << b << endl;
        cout << "The value of c is " << c << endl;
        cout << "The value of d is " << d << endl;
    }
};

int main()
{
    // ani<> a(4, 6.4, 'a', "aniket");
    ani<float, char, char, int> a(32.3, 'a', 'c', 10);
    a.display();

    return 0;
}