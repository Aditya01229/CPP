#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = 0;
    while(num != 0){
        sum = (sum*10) + (num%10);
        num /= 10;
    }
    cout << "The reversed number is: " << sum << endl;
    
    return 0;
}
