#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "enter values of num1 \n"; // (<<) is called insertion operation
    cin >> num1;                       // (>>) is called extraction operator
    cout << "enter values of num2 \n";
    cin >> num2;

    cout << "The sum is " << num1 + num2 << endl;
    return 0;
}
/*
C++ comes with libraries which helps us in performing input/output. In C++ sequence of bytes corresponding to input and output are commonly known as streams

Input Stream: Direction of flow of bytes takes place from input device(for eg: keyboard) to the main memory

Output Stream: Direction of flow of bytes takes place from main memory to the output device(for eg: display)
 
*/

/*
There ia a list of reserved keywords in C++
Since they are used by the language itself, these keywords are not available for re-definition or overloading
In short, we cannot create a variable with these names

-->There is a range of data types sizes
*/