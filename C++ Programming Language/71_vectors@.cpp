#include <bits/stdc++.h>
using namespace std;

template <class T>
void display(vector<T> &v)
{
    cout << "Displaying this vector\n";

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " "; //same
        // cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; //zero length integer vector
    display(vec1);

    vector<char> vec2(4); //4-element length character vector
    vec2.push_back('5');
    display(vec2);

    vector<char> vec3(vec2); //4-element length character vector from vec2
    display(vec3);

    vector<int> vec4(4, 13); //4 element vector of 13's
    display(vec4);
    cout << vec4.size() << endl;

    return 0;
}
