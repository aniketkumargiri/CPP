#include <bits/stdc++.h>
using namespace std;

// Used when almost same work is executing repetedely, making inline is a request to the compiler. It depends on the compiler whether it wants it to make inline or not
inline int product(int a, int b)
{
    //     static int c = 0;
    //     c++;
    //     return a * b + c;
    return a * b;
}

// static values are those who retain their values after every execution
// static int var;
// Firstly default value is 0
// In program, var++;
// Then next time when we incounters the value, its changed value will be returned
// var = 1;
// then var = 2;
// ...

/*
int product(int a, int b){
    static int c = 0; //This executes only once
    c = c + 1;        //Next time this function will run, the value of c will be retained
    
    return a * b + c;
}
*/
// Don't use inline functions in static and inline function, recursion, loops, switch cases...

// Default argument will execute if no factor corresponding to that is not given
float moneyReceived(int currentMoney, float factor = 1.04)
{
    return currentMoney * factor;
}

int main()
{
    // int a, b;
    // cout << "enter the value of a and b" << endl;
    // cin >> a >> b;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;
    // cout << "the product of a and b is " << product(a, b) << endl;

    int money = 100000;
    cout << "\nFOR general: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money, 1.01) << " Rs after one year\n";

    cout << "\nFOR VIP: If you have " << money << " Rs in your bank account, you will receive " << moneyReceived(money) << " Rs after one year\n";

    return 0;
}