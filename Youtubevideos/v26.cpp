#include <iostream>
using namespace std;
class example{
private:
    int a, b;
public:
    void getdata(int x, int y){
        a = x;
        b = y;
    }
    int add(){
        return a+b;
    }
    // Here I have defined friend function.
    friend void change(example &x);
};

// Writing body of friend function
/*

 Friend function is a special type of function which is not a member function of class but can access the private members
 of the class. It can lead a bleach to data security. Therefore using friend function with great care is necessory. 
 It can be used to connect two or more classes.
 Friend function can be friend to more than one function.
 Can we invoked without object.
 Usually objects are passed as arguments.
 Can we declared in private or public part of a class. It doesn't change the output.
 Here &x means a reference value as the function is outside class cos=nsider it a normal function with formal parameters.
 And in order to manipulate the original parameter values we need to use pointers or reference value.
*/
void change(example &x){
    cout << "Enter the values of a,b" << endl;
    cin >> x.a >> x.b;
}
int main(){
    example obj;
    obj.getdata(10, 20);
    cout << obj.add() << endl;
    change(obj);
    cout << obj.add() << endl;
    return 0;
}