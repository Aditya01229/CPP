#include <iostream>
#include <cmath>
using namespace std;

int binadecimal(int bina)
{
    int deci = 0;
    for (int i = 0; bina != 0; i++, bina /= 10)
    {
        deci += (bina % 10) * pow(2, i);
    }
    return deci;
}
int octaldecimal(int octa)
{
    int deci = 0;
    for (int i = 0; octa != 0; i++, octa /= 10)
    {
        deci += (octa % 10) * pow(8, i);
    }
    return deci;
}
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the Binary: ";
    cin >> num;
    cout << "In decimals: " << binadecimal(num) << endl;
    cout << "Enter the Octa: ";
    cin >> num;
    cout << "In decimals: " << octaldecimal(num) << endl;
    return 0;
}
