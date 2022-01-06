#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int age;
    cin >> age;
    if (age >= 18)
    {
        cout << "you can vote\n";
    }
    else
    {
        cout << "you cant vote\n";
    }

    return 0;
}
