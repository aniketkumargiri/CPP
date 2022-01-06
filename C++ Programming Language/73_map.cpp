#include <bits/stdc++.h>
// #include<string>
// #include<map>
using namespace std;

int main()
{
    map<string, int> marksMap;
    cout << "The empty's return value is: " << marksMap.empty() << endl;
    marksMap["ani"] = 100;
    marksMap["kumar"] = 98;
    marksMap["giri"] = 93;
    marksMap.insert({{"swarit", 89}, {"yash", 91}});
    map<string, int>::iterator iter;
    for (iter = marksMap.begin(); iter != marksMap.end(); iter++)
    {
        cout << (*iter).first << " " << (*iter).second << "\n";
    }
    cout << "The size is: " << marksMap.size() << endl;
    cout << "The max_size is: " << marksMap.max_size() << endl;
    cout << "The empty's return value is: " << marksMap.empty() << endl;

    return 0;
}