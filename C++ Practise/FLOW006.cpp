#include <iostream>
using namespace std;
int main()
{
    int n, r, sum, T;
    cin >> T;

    while (T--)
    {
        cin >> n;
        sum = 0;
        while (n != 0)
        {

            r = n % 10;
            sum = (sum) + r;
            n = n / 10;
        }
        cout << sum << endl;
    }
}