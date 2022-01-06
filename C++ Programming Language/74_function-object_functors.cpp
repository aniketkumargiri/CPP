#include <bits/stdc++.h>
using namespace std;

int main()
{
    // #include<functional>
    // Function Objects: Function wrapped in a class so thst it available like an object
    int arr[] = {1, 54, 2, 12, 98, 64, 77};

    // #include<algorithm>
    // sort(arr, arr + 5); //-->Will sort element from 1 to 5, rest as it is
    sort(arr, arr + 7, greater<int>()); //will sort in descending order

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}