#include <iostream>
using namespace std;

// Forward declaration of class B
class B;

class A{
    int num;
    // Here the compiler doesn't know the B class therefore we need to forward declare it.
    // Therefore done is earlier...
    friend void swap(A &, B &);
public:
    void getdata(int x){
        num = x;
    }
    int display(){
        return num;
    }
};

class B{
    int num;
    friend void swap(A &, B &);
public:
    void getdata(int x){
        num = x;
    }
    int display(){
        return num;
    }
};

// Friend to 2 classes.
// Using reference variable to actually reflect the values without copying parameters...
void swap(A &ob1, B &ob2){
    int temp = ob1.num;
    ob1.num = ob2.num;
    ob2.num = temp;
}

int main(int argc, char const *argv[])
{
    A obj1;
    obj1.getdata(20);

    B obj2;
    obj2.getdata(10);
    
    cout << obj1.display() << endl;
    cout << obj2.display() << endl;

    swap(obj1, obj2);

    cout << obj1.display() << endl;
    cout << obj2.display() << endl;
    
    return 0;
}
