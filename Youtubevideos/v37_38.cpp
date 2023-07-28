#include <iostream>
using namespace std;

class Base{
    int data1;
public:
    int data2;
    void setdata(int x = 10, int y = 20){
        data1 = x;
        data2 = y;
    }
    int getdata1(){
        return data1;
    }
    int getdata2(){
        return data2;
    }
};

class Derived : public Base{
    int data3;
public:
    void process(){
        data3 = data2 * getdata1();
    }
    void display(){
        cout << "data1 is " << getdata1() << endl
        << "data2 is " << data2 << endl
        << "data3 is " << data3 << endl;
    }
};

int main(int argc, char const *argv[])
{
    Derived a;
    a.setdata(); //data1 is private in Base and inaccesible from Derived but data1 is also a data member os Derived only the situation is we can't access it from Derived..
    a.process();
    a.display();
    return 0;
}
