#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Using the member function open() of the class 
    ofstream out;
    out.open("62_sample.txt");
    out << "This is me\n";
    out << "This is me also\n";
    out << "This is also me\n";
    out.close();

    ifstream in;
    in.open("62_sample.txt");
    string st, str;
    // in >> st >> str;
    // cout << st << str << endl;

    while (in.eof()==0)
    {
        getline(in,st);
        cout<<st<<endl;
    }
    
    in.close();

    return 0;
}