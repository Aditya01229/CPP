#include <iostream>
using namespace std;

class Student
{
private:
    int roll_no;

public:
    void get_roll_no(int x)
    {
        roll_no = x;
    }

    int return_roll(){
        return roll_no;
    }
};

class Marks : public Student
{
protected:
    float m1, m2;

public:
    void get_marks(float x, float y)
    {
        m1 = x;
        m2 = y;
    }
};

class Result : public Marks
{
private:
    int percentage;
    public:
    void display(){
        cout << "Your Roll no is " << return_roll() << " and Percentage is " << ((m1+m2)/200) * 100 << "%" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Result Aditya;
    Aditya.get_roll_no(27);
    Aditya.get_marks(97, 98);
    Aditya.display();
    return 0;
}
