#include <iostream>
using namespace std;
int naturalsum(int x){
    int sum = 0;
    for (int i = 1; i <= x; i++)
    {
        sum += i;
    }
    return sum;
    
}
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    cout << "The sum of first "<< num << " is " << naturalsum(num);
    return 0;
}
