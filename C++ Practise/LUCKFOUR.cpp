#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, rem = 0, c = 0;
        cin >> n;
        while (n > 0)
        {
            rem = n % 10;
            if (rem == 4)
            {
                c++;
            }
            n /= 10;
        }
        cout << c << endl;
    }
    return 0;
}