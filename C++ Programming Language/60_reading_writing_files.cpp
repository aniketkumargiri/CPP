#include <bits/stdc++.h>
using namespace std;
/*
The uesful classes for working with files are:
// #include<fstream>
        1. fstreambase
        2. ifstream --> derived from fstreambase
        3. ofstream --> derived from fstreambase
*/
int main()
{
    // opening file using constructor and writing it
    string st = "Aniket kumar giri";
    // ofstream out("60_sample.txt"); //Write operation
    // out << st;

    // opening file using constructor and reading it
    string str;
    ifstream in("60_sample@.txt"); //Write operation
    // in >> str;                     //-->Displays a single word of the file
    getline(in, str);
// #include <string>
    cout << str;

    return 0;
}
/*
In order work with files in C++, we will have to open it. Primarily, there are 2 ways to open a file
1. Using the constructor
2. Using the member function open() of the class
*/