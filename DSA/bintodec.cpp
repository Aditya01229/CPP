#include <iostream>
#include <cmath>
using namespace std;

int decimal(int bina){
    int deci = 0;
    for(int i = 0; bina != 0; i++, bina /= 10){
        if(bina%10 == 1){
            deci += pow(2, i);
        }
    }
    return deci;
}
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the Binary: ";
    cin >> num;
    cout << "In decimals: " << decimal(num) << endl;
    return 0;
}
