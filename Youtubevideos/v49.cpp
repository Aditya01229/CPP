#include <iostream>
using namespace std;

/*
Initialization list in constructors...
Special Syntax
class Base1{
    int a, b;
    public:
    Base1(int i, int j) : a(i), b(j){Constructor Body}
};
In this example a is assigned the value i and b is assigned the value j....
*/

class Base1
{
    int a, b;

public:
    Base1(int i, int j) : a(i), b(j) { cout << a << ", " << b << endl; }
};

class Base2
{
    int a, b;

public:
    Base2(int i, int j) : a(i), b(i + j) { cout << a << ", " << b << endl; }
};

class Base3
{
    int a, b;

public:
    Base3(int i, int j) : a(i), b(a + j) { cout << a << ", " << b << endl; }
};

class Base4
{
    int a, b;
    // We have already seen the sequence of constructors called.. Same follows in this special syntax
    // First a will get initialized and then b will get initialized..

public:
    Base4(int i, int j) : b(j), a(i + b) { cout << a << ", " << b << endl; } // Red flag
    // So in this case as a will get initialized first at that time b will be having garbage value hence a = garbage value + i
};

int main(int argc, char const *argv[])
{
    Base1 obj1(2, 4);
    Base2 obj2(3, 6);
    Base3 obj3(4, 6);
    Base4 obj4(10, 20);
    return 0;
}
