#include <bits/stdc++.h>
using namespace std;

// Nesting of member functions

class Binary
{
    // private: by default
    string s;
    // #include<string>

public:
    void read(void);
    void chk_bin(void);
    void ones_compliment(void);
    void display(void);
};

void Binary::read(void)
{
    cout << "enter a binary number\n";
    cin >> s;
}

void Binary::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout << "Incorrect binary format\n";
            exit(0);
        }
    }
}

void Binary::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void Binary::display(void)
{
    cout << "Displaying your binary number\n";
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
    cout << endl;
}
int main()
{

    Binary b;
    b.read();
    // b.chk_bin();
    b.display();
    b.ones_compliment();
    cout << "\nAfter interchanging 0 and 1:\n";
    b.display();

    return 0;
}
/*
OOPs --> Classes and objects
C++ --> C with classes
class --> extension of structures(in C)
structures had limitations
      -->members are public
      --> no methods
Classes --> structures + more
Classes --> can have methods and properties
Classes --> can make few mwmbers as private & few as public
strucures in C++ are typedef
you can declare objects along with the class declaration
class employee{
         class definition;
     }ani,kumar,giri;
ani.salary doesnot make sense if salary is private
*/
