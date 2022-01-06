#include <bits/stdc++.h>
using namespace std;

// function prototype
// type function - name(agruments);
int sum(int a, int b); // Acceptable
// int sum(int a, b); // Not acceptable
// int sum(int, int); // Acceptable

void wish()
{
    cout << "\nHello, Good Morning Aniket\n";
    return;
}

int main(int argc, char const *argv[])
{
    // wish();

    int num1, num2;
    // num1, num2 are actual para-meters
    cout << "enter first number " << endl;
    cin >> num1;
    cout << "enter second number " << endl;
    cin >> num2;

    int s = sum(num1, num2);

    cout << "The sum is " << s << endl;

    return 0;
}

int sum(int x, int y)
{
    //a and b are formal para-meters because they are taking values from the actual parameters num1 and num2
    return x + y;
}
