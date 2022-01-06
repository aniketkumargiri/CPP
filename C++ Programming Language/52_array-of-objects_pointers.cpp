#include <bits/stdc++.h>
using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, float b)
    {
        id = a;
        price = b;
    }
    void getData()
    {
        cout << "The id of this item is " << id << endl;
        cout << "The price of this item is " << price << endl;
    }
};

int main()
{
    int size = 3;
    // int *ptr = &size;
    // int *ptr = new int [34];

    //1. general store item
    //2. veggies item
    //3. hardware item

    Shop *ptr = new Shop[size];
    Shop *ptrTemp = ptr;
    int p;
    float q;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}