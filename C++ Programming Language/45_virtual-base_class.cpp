#include <bits/stdc++.h>
using namespace std;
/*
Student --> Test
Student --> Sports

Test --> Result
Sports --> Result
*/
class Student
{
protected:
    int roll;

public:
    void set_number(int a)
    {
        roll = a;
    }
    void print_number()
    {
        cout << "Your roll number is " << roll << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void print_marks()
    {
        cout << "Your result is here: " << endl
             << "Mathematics: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : public virtual Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }
    void print_score()
    {
        cout << "your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display()
    {
        total = (maths + physics + score);
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result ani;
    ani.set_number(89);
    ani.set_marks(97.8, 99.2);
    ani.set_score(9);
    ani.display();

    return 0;
}