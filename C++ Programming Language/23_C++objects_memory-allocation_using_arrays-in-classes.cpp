#include <bits/stdc++.h>
using namespace std;

class Shop
{
    // private
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    void initCounter(void)
    {
        counter = 0;
    }
    void setPrice(void);
    void displayPrice(void);
};

void Shop::setPrice(void)
{
    cout << "enter id of your item number " << counter + 1 << endl;
    cin >> itemId[counter];
    cout << "enter price of your item " << endl;
    cin >> itemPrice[counter];
    counter++;
}

void Shop::displayPrice(void)
{
    for (int i = 0; i < counter; i++)
    {
        cout << "the price of item with id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop dukan;
    dukan.initCounter();
    dukan.setPrice();
    dukan.setPrice();
    dukan.setPrice();
    dukan.displayPrice();

    return 0;
}