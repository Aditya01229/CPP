#include <iostream>
using namespace std;


class Base1{
    public:
    void func(){
        cout << "Hello" << endl;
    }
};

class Base2{
    public:
    void func(){
        cout << "Bye" << endl;
    }
};

class Derived : public Base1, public Base2{
    // Here the obj of the derived class dont know which function to call which creates an ambitiguity.. So we need to address the func which need to be called in such scenarious
    public:
    void func(){
        Base1 :: func();
        // We can also write some extra commands here.
        cout << "Ok" << endl;
        Base2 :: func();
    }
};
int main(int argc, char const *argv[])
{
    Derived obj;
    obj.func();       // Will throw an error if we didn't define the function which need to be called in the derived class...
    return 0;
}
