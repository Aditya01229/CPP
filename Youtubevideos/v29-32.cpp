#include <iostream>
using namespace std;

// Constructors are special type of functions which automatically invoke when a object is declared...
// Constructors have the same name as of the class.
// Constructors are used to initialize the data members of an object..
// There are 3 types of constructors... 1) Default   2) Parameterized   3) Copy 
// They should be always be written in public part so it is accessible from outside of class...
// Constructors do not have any return type..
// We cannot refer to constructors address...

class Example1{
    int a;
public:
    // Creating a Constructor.
    // Default Constructor - Do not having any parameters..
    Example1(void){
        a = 10;
    }

    void display(){
        cout << a << endl;
    }
};


class Example2{
    int a, b;
public:

    // Creating a Constructor.
    // Parameterized Constructor - Have parameters..
    // This constructor is for 0 and 1 arguments due to default argument...
    Example2(int x = 0){
        a = x;
        b = 0;
    }

    // Constructor overloading...
    // This constructor is for 2 arguments..
    Example2(int x, int y){
        a = x;
        b = y;
    }

    // Take care while oveerloading that two functions doesn't get called at same scenario as in such case compiler throws an error...


    void display(){
        cout << a << " " << b << endl;
    }
};


int main(int argc, char const *argv[])
{
    Example1 obj;
    obj.display();

    // Default argument and constructor overloading example...
    Example2 obj1;
    obj1.display();

    // Implicit call...
    Example2 obj2(30, 20);
    obj2.display();

    // Implicit call with default argument...
    Example2 obj3(30);
    obj3.display();

    // Explicit call
    Example2 obj4 = Example2(5, 4);
    obj4.display();


    return 0;
}
