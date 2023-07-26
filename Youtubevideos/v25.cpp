#include <iostream>
using namespace std;

// Here writing a program for complex number with the real and imaginary part. e.q - 3 + 7i
class complex
{
    int real;
    int imag;

public:
    void GetData(int x, int y)
    {
        real = x;
        imag = y;
    }

    // In this function im passing objects as arguments...
    void Sum(complex a, complex b)
    {
        real = a.real + b.real;
        imag = a.imag + b.imag;
    }

    void PrintNum(void)
    {
        if (imag < 0)
        {
            cout << real << imag << "i" << endl;
        }
        else
            cout << real << "+" << imag << "i" << endl;
    }
};
int main()
{
    // Defining array of complex number...
    complex arr[3];

    arr[0].GetData(2, -4);
    arr[0].PrintNum();

    arr[1].GetData(3, 3);
    arr[1].PrintNum();

    arr[2].Sum(arr[0], arr[1]);
    arr[2].PrintNum();

    return 0;
}
