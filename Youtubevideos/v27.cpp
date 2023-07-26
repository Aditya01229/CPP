#include <iostream>
using namespace std;
// This is a great example for understanding sequence of defining classes and functions.
// In this as we have to declare readadd as friend and we have made it friend before declaring it. So first we need to declare that function.
// And also that function is using complex class parameters we need to forward declaration of class Complex.

// Forward declaration
class Complex;

class Calculator {
public:
    int add(int x, int y) {
        return x + y;
    }
    // int realadd(Complex x, Complex y) {
    //     return x.a + y.a;
    // }
    // We cannot use a and b here as till now we have not defined it.
    // So here we will just declare the function and define it later.
    int realadd(Complex x, Complex y);
    int compadd(Complex x, Complex y);
};

class Complex {
    int a, b;
    // friend int Calculator :: realadd(Complex x, Complex y);
    // friend int Calculator :: compadd(Complex x, Complex y);
    // INSTEAD OF THIS...
    // If we have many friend functions in that case we can just declare the class as friend to make it more convenient.
    friend class Calculator;

public:
    void Getdata(int x, int y) {
        a = x;
        b = y;
    }
};

int Calculator :: realadd(Complex x, Complex y) {
        return x.a + y.a;
    }
int Calculator :: compadd(Complex x, Complex y) {
        return x.b + y.b;
    }


// This is proper flow of code...

int main() {
    // Example usage
    Complex c1, c2;
    c1.Getdata(2, 3);
    c2.Getdata(4, 5);

    Calculator calc;
    int result = calc.realadd(c1, c2);
    cout << "Result: " << result << endl;
    result = calc.compadd(c1, c2);
    cout << "Result: " << result << endl;

    return 0;
}