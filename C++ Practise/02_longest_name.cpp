#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T, N, i, j, MAX, MaxIndex;
    cin >> T;

    while (T--)
    {
        cin >> N;
        string str;
        vector<string> s;
        int a[N];
        MAX = 0;
        MaxIndex = -1;
        for (i = 0; i < N; i++)
        {
            cin >> str;
            s.push_back(str);
            a[i] = s[i].length();
            if (a[i] > MAX)
            {
                MAX = a[i];
                MaxIndex = i;
            }
        }
        cout << s[MaxIndex] << endl;
    }
    return 0;
}