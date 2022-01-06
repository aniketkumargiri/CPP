#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    getline(cin,str);
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
            continue;
        else
            cout << str[i];
    }

    return 0;
}