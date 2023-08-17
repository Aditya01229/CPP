#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number: ";
    cin >> num;
    int sum = 0;
    for(int i = num; i != 0; i /= 10){
        sum += (i%10)*(i%10)*(i%10);
    }
    if(sum == num){
        cout << "Armstrong Number!" << endl;
    }
    else{
        cout << "Not an Armstrong number!" << endl;
    }
    return 0;
}
