#include <iostream>
#include <cmath>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cout <<"Enter the number: ";
    cin >> n;
    int flag = 1;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if(n%i==0){
            cout << "Not prime" << endl;
            flag = 0;
            break;
        }
    }
    if(flag == 1){
        cout << "Prime" << endl;
    }
    
    return 0;
}
