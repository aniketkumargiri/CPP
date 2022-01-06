#include <bits/stdc++.h>
using namespace std;

int global = 7;

void sum(int a, int b)
{
    cout << "The sum using function = " << a + b;
}

int main(int argc, char const *argv[])
{
    // int a = 14, b = 15;
    // cout << "The value of a is " << a << " and the value of b is " << b << endl;

    // float pie = 3.14;
    // cout << "the value of pie is " << pie << endl;

    // char c = 'd';
    // cout << "the entered character is " << c << endl;

    // cout << "global=" << global << endl;

    // int global = 2;
    // cout << "global=" << global << endl;

    // bool is_true = true;
    // cout << "boolian value of true is " << is_true << endl;
    // bool is_false = false;
    // cout << "boolian value of false is " << is_false << endl;

    // sum(a, b);
    
    // sizeof operator  tells the size of the data type
    cout << "size of int is " << sizeof(int) << " bytes" << endl;
    cout << "size of short int is " << sizeof(short) << " bytes" << endl;
    cout << "size of long int is " << sizeof(long) << " bytes" << endl;
    cout << "size of long long int is " << sizeof(long long) << " bytes" << endl;
    cout << "size of float is " << sizeof(float) << " bytes" << endl;
    cout << "size of double is " << sizeof(double) << " bytes" << endl;
    cout << "size of char is " << sizeof(char) << " bytes" << endl;
    cout << "size of boolean is " << sizeof(bool) << " bytes" << endl;

    return 0;
}
/*
--> A variable is a container to hold data

--> Scope of a variable is the region in code where the existence of variable is valid

1.Local variables: Local variables are declared inside the braces of any function and canbe accessed only from there

2.Global variables: Global variables are declared outside any function and can be accessed from anywhere

-->Global and local variables can have same name in C++

-->preferance of local variable is more than the global variable
*/

/*
Rules to declare variables in C++

--> Varibles names in C++ can range from 1 to 255 characters
--> All variables names must begin with a letter of alphabet or an underscore(_)
--> After the first initial letter, variables names can also contain letters and numbers
--> Variables names are case sensitive
--> NO spaces or special character are allowed
--> You cannot use a C++ keyword (a reserved word) as a variable name
*/

/*
--> Data type defines the type of data a variable can store

1.Built-in data types:
    int {0,1,2,3,15,...}-->Integers
    float {1.33,3.14,...}-->Decimal Values
    char {'a','A','1',..}-->Characters
    double {3.148927,...}-->Decimal values with more precision
    bool {true,false}-->True or False value

2.user defined data types:
    struct  
    union
    enum 
    
3.derived data types:
    arrays 
    function
    pointers 
*/