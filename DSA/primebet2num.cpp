#include <iostream>
#include <cmath>
using namespace std;

void prime(int num1, int num2){
    int flag;
    for(int i = num1; i < num2; i++){
        flag = 1;
        for (int j = 2; j <= sqrt(i); j++)
        {
            if(i%j == 0){
                flag = 0;
                break;
            }
        }
        if(flag == 1){
            cout << i << " ";
        }
        
    }
}
int main(int argc, char const *argv[])
{
    prime(10, 20);
    return 0;
}
