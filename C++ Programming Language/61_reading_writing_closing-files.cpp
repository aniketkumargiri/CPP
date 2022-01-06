#include <bits/stdc++.h>
using namespace std;

int main()
{
    // connecting our file with aout stream
    ofstream aout("61_sample.txt");

    // creating a name string and filling it with the string entered by the user
    string name;
    cout << "Enter your name\n";
    cin >> name;

    // writing a string to the file
    aout << "My name is " << name;

    // closing above opened file
    aout.close();

    ifstream ani("61_sample.txt");
    string content;
    ani >> content;
    cout << "The content of this file is: " << content;
    ani.close();

    return 0;
}