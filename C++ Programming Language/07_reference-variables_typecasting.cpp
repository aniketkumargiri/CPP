#include <bits/stdc++.h>
using namespace std;
int c = 45;

int main(int argc, char const *argv[])
{
    // int a, b, c;
    // cout << "enter the value of a\n";
    // cin >> a;
    // cout << "enter the value of b\n";
    // cin >> b;
    // c = a + b;

    // cout << "The sum is: local value of c is " << c << endl;
    // cout << "global value of c is " << ::c << endl; //(::) is scope resolution operator
    // cout<<endl;

    // **********float,double and long double literals**********
    // float d = 34.4f;       //it is a floating point number(F/f)
    // long double e = 34.4l; //it is a double(L/l)

    // cout << "the value of d is " << d << endl;
    // cout << "the value of e is " << e << endl;

    //by default c++ takes the decimal values as double
    // cout << "The size of 34.4 is " << sizeof(34.4) << endl;
    // cout << "The size of 34.4f is " << sizeof(34.4f) << endl;
    // cout << "The size of 34.4F is " << sizeof(34.4F) << endl;
    // cout << "The size of 34.4L is " << sizeof(34.4L) << endl;
    // cout << "The size of 34.4l is " << sizeof(34.4l) << endl;
    // cout<<endl;

    // **********reference variables**********
    float x = 45.5;
    float &y = x;
    cout <<"The value of x is "<< x << endl;
    cout <<"The value of x is "<< (int)x << endl;
    cout <<"The value of x is "<< (float)x << endl;
    cout<<endl;

    cout <<"The value of y is "<< y << endl;
    cout <<"The value of y is "<< (int)y << endl;
    cout <<"The value of y is "<< double(y) << endl;
    cout<<endl;

    int z = 45;
    cout <<"The value of z is "<< (int)z << endl;
    cout <<"The value of z is "<< (float)z << endl;
    cout<<endl;

    cout <<"The expression is "<< z + (int)x << endl;
    cout <<"The expression is "<< z + int(x) << endl;
    cout <<"The expression is "<< z + x << endl;

    return 0;
}
