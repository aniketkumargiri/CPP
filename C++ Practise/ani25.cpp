#include<iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a;
    int *p;
    p=&a;
    a=5;
    cout<<sizeof(int)<<" bytes\n";
    cout<<a<<" or "<<*p<<endl;
    cout<<&a<<" or "<<p<<endl;
    cout<<&p;

    return 0;
}
//pointers are variable that stores the address of another variable of same data types
