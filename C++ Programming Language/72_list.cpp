#include <bits/stdc++.h>
using namespace std;

void display(list<int> &lst)
{
    list<int>::iterator it;
    for (it = lst.begin(); it != lst.end(); it++)
    {
        cout << *it << " ";
    }
    cout << endl;
}
int main()
{
    // #include <list>
    list<int> list1; //list of 0 length

    // Adding elements to the list1
    list1.push_back(5);
    list1.push_back(9);
    list1.push_back(2);
    list1.push_back(2);
    list1.push_back(12);
    list1.push_back(1);
    display(list1);

    list1.push_front(19);
    display(list1);

    // Sorting the list1
    list1.sort();
    display(list1);
    cout << endl;

    /*
    list<int>::iterator iter;
    iter = list1.begin();
    cout << *iter << " " << endl;
    iter++;
    cout << *iter << " " << endl;
    iter++;
    cout << *iter << " " << endl;
    iter++;
    cout << *iter << " " << endl;
    iter++;
    cout << *iter << " " << endl;
    iter++;
    */

    /*
    // Removing elements from the list1
    list1.pop_back();
    display(list1);

    list1.pop_front();
    display(list1);

    list1.remove(2);
    display(list1);
    cout << endl;
    */

    list<int> list2(3); //empty list if size 7
    list<int>::iterator iter;
    iter = list2.begin();
    *iter = 45;
    iter++;
    *iter = 5;
    iter++;
    *iter = 34;
    iter++;
    display(list2);

    // Sorting the list2
    list2.sort();
    display(list2);
    cout << endl;

    // Swapping list1 and list2 
    list1.swap(list2);
    display(list1);
    display(list2);

    // Merging list1 and list2
    list1.merge(list2);
    cout << "After merging: ";
    display(list1);

    //Reversing the list after merging
    list1.reverse();
    display(list1);


    return 0;
}