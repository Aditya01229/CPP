#include <iostream>
using namespace std;
/*
If Base class is having a constructor and we make an object of derive class, then the constructor of base class automatically gets called..
For multiple inheritance - The constructors gets called int he order base class used to derive the sub class.
For multilevel inheritance - In the order of heritance .. i.e grand, father, son...
The constructors of virtual base class are invoked before an non virtual base class.
If there are many virtual classes then they follow the same order...
C++ have a special syntax for passing arguments to all constructors from the derived class..
Derived(int a, int b, int c): Base1(a), Base2(b){
    derived1 = c;
}
*/

/*
// Case1
class A : public B{
    order of constructor execution - B --> A,
}


// Case2
class A : public B, public C{
    order of constructor execution - B --> C --> A
}


// Case3
class A : public B, virtual public C{
    order of constructor execution - C --> B --> A
}
*/

class Base1
{
    int b1;

public:
    Base1(int a)
    {
        b1 = a;
        cout << "Base1" << endl;
    }
};
class Base2
{
    int b2;

public:
    Base2(int a)
    {
        b2 = a;
        cout << "Base2" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int d;

public:
    // Special Syntax....
    Derived(int a, int b, int c) : Base1(a), Base2(b)
    {
        d = c;
        cout << "Derived" << endl;
    }
};
int main(int argc, char const *argv[])
{
    Derived ob(1, 2, 3);
    return 0;
}
