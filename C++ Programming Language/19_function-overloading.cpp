#include <bits/stdc++.h>
using namespace std;

// Function overloading --> Two or more functions having same function name with same return type having different sets & number of parameters & arguments

int sum(int a, int b)
{
    return a + b;
    // cout << "\nUsing function with 2 arguments\n";
}

int sum(int a, float b)
{
    return a + b;
    // cout << "\nUsing function with 2 arguments\n";
}

int sum(int a, int b, int c)
{
    return a + b + c;
    // cout << "\nUsing function with 3 arguments\n";
}

// Calculate the volume of a cube
int volume(int a)
{
    return a * a * a;
}

// Calculate the volume of a cylinder
int volume(double r, int h)
{
    return (3.14) * r * r * h;
}

// Calculate the volume of a cuboid
int volume(int l, int b, int h)
{
    return l * b * h;
}

// void volume(int l, int b, int h)
// {
//     int vol = l * b * h;
//     cout << vol << endl;
// }

int main()
{
    cout << "The sum of 3 and 4 is " << sum(3, 4) << endl;
    // cout << "The sum of 3 and 4 is " << sum(3, 2.72) << endl; // ambiguity
    cout << "The sum of 3, 4 and 5 is " << sum(3, 4, 5) << endl;
    cout << "The volume of cube of side 20 is " << volume(20) << endl;
    cout << "The volume of cylinder of radius 7 and height 10 is " << volume(7, 10) << endl;
    // volume(1, 2, 3); // ambiguity --> Not function overloading
    cout << "The volume of cuboid of 10, 20 and 30 is " << volume(10, 20, 30) << endl;

    return 0;
}