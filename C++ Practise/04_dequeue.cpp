#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_front(3);
    d.push_front(4);

    // while (!d.empty())
    // {
    //     cout<<d.front()<<" ";
    //     d.pop_front();
    // }
    
    while (!d.empty())
    {
        cout<<d.back()<<" ";
        d.pop_back();
    }
    

    return 0;
}