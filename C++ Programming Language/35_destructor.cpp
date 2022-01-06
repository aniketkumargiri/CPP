#include <bits/stdc++.h>
using namespace std;

int Count = 0;

class Num
{
public:
    Num()
    {
        Count++;
        cout << "This is the time when constructor is called for object number " << Count << endl;
    }
    ~Num()
    {
        cout << "This is the time when destructor is called for object number " << Count << endl;
        Count--;
    }
};

int main()
{
    cout << "We are inside our main function\n";
    cout << "Creating first object n1\n";
    Num n1;
    {
        cout << "Entering this block\n";
        cout << "Creating two more objects\n";
        Num n2, n3;
        cout << "Exiting this block\n";
    }
    cout<<"Back to main\n";

    return 0;
}
/*
-->Destructor never takes an argument nor does it return any value
*/