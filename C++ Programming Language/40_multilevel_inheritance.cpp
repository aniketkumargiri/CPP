#include <bits/stdc++.h>
using namespace std;

class Student
{
protected:
    int roll;

public:
    void setRoll(int);
    void getRoll();
};
void Student::setRoll(int r)
{
    roll = r;
}
void Student::getRoll()
{
    cout << "The roll number is " << roll << endl;
}

class Exam : public Student
{
protected:
    float maths;
    float physics;

public:
    void setMarks(float, float);
    void getMarks();
};
void Exam::setMarks(float m, float p)
{
    maths = m;
    physics = p;
}
void Exam::getMarks()
{
    cout << "The Marks in Mathematics is " << maths << endl;
    cout << "The Marks in Physics is " << physics << endl;
}

class Result : public Exam
{
    float percentage;

public:
    void display()
    {
        getRoll();
        getMarks();
        cout << "Your percentage is " << ((maths + physics) / 2) << endl;
    }
};

int main()
{
    Result ani;
    ani.setRoll(420);
    ani.setMarks(99.9, 97.0);
    ani.display();

    return 0;
}
/*
If we are inheriting B from A and C from B:[A-->B-->C]

1.A is the Base class for B and B is the Base class for C

2.A-->B-->C is caleed Inheritance Path
*/