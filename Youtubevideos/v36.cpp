#include <iostream>
using namespace std;

/*
Inheritance is the capability of a class to derive properties from another class..
It promotes reusability..
Sub class or derived class - Who acquires properties.
Super class or Base class - Whose properties are inheritated..
One of the main feature of OOPs
Many types-
    - Single - one to one
    - Multiple - from two to one
    - Multilevel - derived from derived
    - Hierarchy - from one to two or more
    - Hybrid - two or more types of inheritance occuring simultaneously..
*/

/*
in Inheritance the derived class cannot access the private members of base class..
protected can be accessed by derived class but not by any other outside block..
Modes of Inheritance
    - private - public to private, protected to private..
    - protected - public to protected, protected to protected..
    - public - public to public, protected to protected..

    BY DEFAULT THE MODE OF INHERITANCE IS PRIVATE...
*/

// When we make an object of derived class the default constructor of Base class automatically gets called..
// Therefore it is always necessory to make default constructor os base class..

class Base
{
private:
    int a;

public:
    int b;
    Base(int x = 5, int y = 10)
    {
        a = x;
        b = y;
    }

    void show()
    {
        cout << a << " " << b << endl;
    }
};

class Derived : public Base
{
public:
    int c;
    Derived(int x = 3, int y = 6)
    {
        // a = x;  - Will throw an error as a is private and not accessible...
        b = x;
        c = y;
    }
    void show()
    {
        cout << "a not accessible"
             << " " << b << " " << c << endl;
    }
};

int main(int argc, char const *argv[])
{
    Base b1;
    b1.show();

    Derived d1;
    d1.show();
    
    return 0;
}
