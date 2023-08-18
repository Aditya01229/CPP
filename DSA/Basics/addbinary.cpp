// To be done later!!!
// This is a wrong code!!!
#include <iostream>
using namespace std;

int addbina(int a, int b){
    int prevcarry = 0;
    int ans = 1;
    for (int i = 0; (a != 0 || b != 0); i++, a /= 10, b /= 10)
    {
        int temp = (a%10) + (b%10) + prevcarry;
        if(temp == 0){
            ans = ans + 0*10;
            prevcarry = 0;
        }
        else if(temp == 1){
            ans = ans + 1*10;
            prevcarry = 0;
        }
        else if(temp == 2){
            ans = ans + 0;
            prevcarry = 1;
        }
        else if(temp == 3){
            ans = ans*10 + 1;
            prevcarry = 1;
        }
    }
    return ans;
    
}
int main(int argc, char const *argv[])
{
    int num1, num2;
    cout << "Enter the two binary numbers: ";
    cin >> num1 >> num2;
    cout << addbina(num1, num2) << endl;
    return 0;
}
