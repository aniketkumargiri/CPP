#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int n;
        cin >> n;
        int sum = n % 10;
        while (n != 0)
        {
            if (n >= 0 && n <= 10)
            {
                sum = sum + (n % 10);
            }
            n = n / 10;
        }
        cout << sum << endl;
    }
    return 0;
}