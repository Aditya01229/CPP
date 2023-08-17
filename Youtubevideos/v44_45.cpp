#include <iostream>
using namespace std;

// Virtual Base Class
/*
Student --> Tests
Student --> Sports
Tests, Sports --> Result
This will create an ambiguity as same functions from tests and sports are going to be inheritated to results class.
So in such case we declare Tests ans sports class as virtual class to resolve this ambitiguity..
*/

class Student
{
protected:
    int roll_no;

public:
    void get_roll_no(int a)
    {
        roll_no = a;
    }
    void print_roll_no(void)
    {
        cout << "Your Roll no is " << roll_no << endl;
    }
};

class Tests : virtual public Student
{
protected:
    float maths, physics;

public:
    void get_marks(float x, float y)
    {
        maths = x;
        physics = y;
    }
    void print_marks(void)
    {
        cout << "Maths marks: " << maths << endl
             << "Physics marks: " << physics << endl;
    }
};

class Sports : virtual public Student
{
    protected:
    float score;
    public:
    void get_score(int a){
        score = a;
    }
    void print_score(void){
        cout << "Sports score: " << score << endl;
    }
};


class Result : public Tests, public Sports{
    protected:
    float total;
    public:
    void print_Results(void){
        print_marks();
        print_score();
        total = maths + physics + score;
        cout << "Total marks: " << total << endl;
    }
};

int main()
{
    Result Aditya;
    Aditya.get_marks(9, 9.5);
    Aditya.get_score(8);
    Aditya.print_Results();
    return 0;
}
