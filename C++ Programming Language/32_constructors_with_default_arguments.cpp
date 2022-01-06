#include <bits/stdc++.h>
using namespace std;

class SIMPLE
{
    int data1, data2, data3;

public:
    SIMPLE(int a, int b = 9, int c = 27)
    {
        data1 = a;
        data2 = b;
        data3 = c;
    }
    void printData();
};
void SIMPLE::printData()
{
    cout << "The value of data1, data2 and data3 is " << data1 << "," << data2 << " and " << data3<< endl;
}

int main()
{
    // SIMPLE s(12,13,14);
    // SIMPLE s(12,13);
    SIMPLE s(1);
    s.printData();

    return 0;
}