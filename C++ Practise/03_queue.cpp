#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;
    q.push(1);
    q.push(2);
    q.push(3);

    // cout<<q.size()<<endl;

    // cout<<q.front()<<endl;

    // cout<<q.back()<<endl;

    // cout << q.empty() << endl;

    while (!q.empty())
    {
        cout << q.front() << " ";
        q.pop();
    }

    return 0;
}