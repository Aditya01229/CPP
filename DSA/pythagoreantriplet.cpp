#include <iostream>
using namespace std;

bool triplet(int x, int y, int z){
    if((x*x == (y*y + z*z)) || (y*y == (x*x + z*z)) || (z*z == (y*y + x*x))){
        return true;
    }
    else{
        return false;
    }
}
int main(int argc, char const *argv[])
{
    int num1, num2, num3;
    cout << "Enter the numbers: ";
    cin >> num1 >> num2 >> num3;
    if(triplet(num1, num2, num3)){
        cout << "Pythagorean triplet!" << endl;
    }
    else{
        cout << "Not a Pythagorean triplet!" << endl;
    }
    return 0;
}
