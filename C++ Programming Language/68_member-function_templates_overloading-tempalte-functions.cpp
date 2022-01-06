#include <bits/stdc++.h>
using namespace std;

template <class T>
class ani
{
public:
    T data;
    ani(T a)
    {
        data = a;
    }
    void display();
};

template <class T>
void ani<T>::display()
{
    cout << data << endl;
}
void func(int a)
{
    cout << "I am first function()\n"
         << a << endl;
}

template <class T>
void func(T a)
{
    cout << "I am templatized function()\n"
         << a << endl;
}

int main()
{
    // ani<float> a(5.75);
    // ani<char> a('a');
    // ani<int> a(30);
    // cout << a.data << endl;
    // a.display();

    func(4); //Exact match takes the highest priority
    func('e');

    return 0;
}