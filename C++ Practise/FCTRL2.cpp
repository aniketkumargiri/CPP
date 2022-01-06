#include <bits/stdc++.h>
// #include <boost/multiprecision/cpp_int.hpp>
// using boost::multiprecision::cpp_int;
using namespace std;

int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        // cpp_int n, f = 1;
        int n, f = 1;
        cin >> n;
        for (int i = 2; i <= n; i++)
        {
            f = f * i;
        }
        cout << f << endl;
    }

    return 0;
}