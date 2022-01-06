#include <bits/stdc++.h>
using namespace std;

class POINT
{
    int x, y;
    friend void difference(POINT, POINT);

public:
    POINT(int a, int b)
    {
        x = a;
        y = b;
    }
    void displayPoint()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
};

void difference(POINT o1, POINT o2)
{
    int x_diff = o2.x - o1.x;
    int y_diff = o2.y - o1.y;
    double dist = sqrt((x_diff) * (x_diff) + (y_diff) * (y_diff));
    cout << "Distance is:" << dist << " units" << endl;
}

int main()
{
    POINT p1(1, 3);
    p1.displayPoint();

    POINT p2(4, 7);
    p2.displayPoint();

    difference(p1,p2);

    return 0;
}