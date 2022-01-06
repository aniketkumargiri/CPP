#include <bits/stdc++.h>
using namespace std;
/*
int funAverage(int a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}

float funcAverage(float a, int b)
{
    float avg = (a + b) / 2;
    return avg;
}
*/

template <class T1, class T2>
float funAverage(T1 a, T2 b)
{
    float avg = (a + b) / 2.0;
    return avg;
}

template <class T>
void Swap(T &a, T &b)
{
    T temp = a;
    a = b;
    b = temp;
}

int main()
{
    float c, d;
    c = funAverage(5, 4.3);
    printf("The average of these numbers is %.3f\n", c);
    // d = funcAverage(5.04, 4);
    // printf("The average of these numbers is %.3f\n", d);

    int x = 5, y = 7;
    Swap(x, y);
    cout << x << " " << y << endl;

    return 0;
}