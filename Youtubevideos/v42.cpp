// In this we are going to use OOPs and Inheritance to make imple calculator and scientific calculator
#include <iostream>
#include <cmath>
using namespace std;

class SimpleCalculator
{
protected:
    int num1, num2;

public:
    SimpleCalculator(){};
    SimpleCalculator(int a, int b)
    {
        num1 = a;
        num2 = b;
    }
    void add()
    {
        cout << num1 + num2 << endl;
    }
    void subtract()
    {
        cout << num1 - num2 << endl;
    }
    void multiply()
    {
        cout << num1 * num2 << endl;
    }
    void division()
    {
        cout << num1 / num2 << endl;
    }
};

class ScienctificCalculator
{
protected:
    int num;

public:
    ScienctificCalculator() {}
    ScienctificCalculator(int a)
    {
        num = a;
    }
    void square()
    {
        cout << num * num << endl;
    }

    void cube()
    {
        cout << num * num * num << endl;
    }
};

class HybridCalculator : public SimpleCalculator, public ScienctificCalculator
{
    public:
    HybridCalculator(){}
    HybridCalculator(int a, int b){
        num1 = a;
        num = a;
        num2 = b;
    }
};

int main(int argc, char const *argv[])
{
    HybridCalculator ob1(4, 2);
    ob1.square();
    ob1.division();
    ob1.add();

    return 0;
}
