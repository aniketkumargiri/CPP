#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    // Arrays
    int marks[] = {45, 87, 97, 46};
    // int marks[4] = {45, 87, 97, 46};
    // int marks[10] = {45, 87, 97, 46};
    // for (int i = 0; i < 4; i++)
    // {
    //     cout << "The value of marks " << i << " is " << marks[i] << endl;
    // }
    // cout << endl;

    // cout << "These are marks\n";
    // cout << marks[0] << endl;
    // cout << marks[1] << endl;
    //we can change the values in the arrays
    // marks[1] = 34;
    // cout << marks[1] << endl;
    // cout << marks[2] << endl;
    // cout << marks[3] << endl;
    // cout << endl;

    // int mathMarks[4];
    // mathMarks[0] = 65;
    // mathMarks[1] = 85;
    // mathMarks[2] = 75;
    // mathMarks[3] = 69;

    // cout << "These are math marks\n";
    // cout << mathMarks[0] << endl;
    // cout << mathMarks[1] << endl;
    // cout << mathMarks[2] << endl;
    // cout << mathMarks[3] << endl;

    // Name of the pointer indicate the base address of that array
    int *p = marks; // p = &marks[0]
    // cout << "\nThe value of marks[0] is " << *p << endl;
    // cout << "The value of marks[1] is " << *(p + 1) << endl;
    // cout << "The value of marks[2] is " << *(p + 2) << endl;
    // cout << "The value of marks[3] is " << *(p + 3) << endl;
    // cout << endl;

    // pointers arithmetics
    cout << *(p) << endl;
    cout << *(++p) << endl;
    cout << *(p++) << endl;
    cout << *(p--) << endl;
    cout << *(--p) << endl;

    return 0;
}

// What are arrays in C++ ?

// An array is a collection of items of similar type stored in contiguous memory locations
// Sometimes, a simple variable is not enough to hold all the data
// For example, lets say we want to store the marks of 2500 students, having 2500 different variables for this task is not feasible
// To solve this problem, we can define an array with size 2500 that can hold the marks of all students

// (p + i) = &a[i]
// *(p + i) = a[i]