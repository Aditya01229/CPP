#include <iostream>
using namespace std;
// Copy Constructor is used to assign values of another object...
class Example
{
    int data;

public:
    Example()
    {
        cout << "Enter data: " << endl;
        cin >> data;
    }
    Example(int x)
    {
        data = x;
    }

    // ***IMPORTANT***
    // If we comment out the copy constructor declaration in such case also the compiler doesn't throws an error..
    // Compiler supplies it's own copy constructor in such case...
    // Example(Example &ob)
    // {
    //     data = ob.data;
    // }

    void show()
    {
        cout << data << endl;
    }
};
int main(int argc, char const *argv[])
{
    Example a;
    a.show();

    Example b(10);
    b.show();

    Example c(a);
    c.show();

    Example d = b; // Another way of calling copy constructor...
    d.show();

    d = a;         // We can perform equal assignment operator on objects...It is pre defined for every class..
    d.show();
    
    return 0;
}
