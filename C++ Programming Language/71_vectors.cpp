#include <bits/stdc++.h>
using namespace std;

void display(vector<int> &v)
{
    for (int i = 0; i < v.size(); i++)
    {
        // cout << v[i] << " "; //same
        cout << v.at(i) << " ";
    }
    cout << endl;
}
int main()
{
    vector<int> vec1; //zero length integer vector

    int element, size;
    cout << "Enter the size of your vector ";
    cin >> size;
    for (int i = 0; i < size; i++)
    {
        cout << "Enter an element to add to this vector ";
        cin >> element;
        vec1.push_back(element);
    }
    // vec1.pop_back();

    display(vec1);

    vector<int>::iterator iter = vec1.begin();
    // vec1.insert(iter, 566); //insert 566 at the very beginning
    // vec1.insert(iter + 2, 34); //insert 34 at the position beginning + 2
    vec1.insert(iter + 1, 4, 19); //insert 19 four times at the position beginning + 1
    
    display(vec1);

    return 0;
}