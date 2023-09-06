#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    int num;
    cout << "Enter the number of Rows: ";
    cin >> num;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    for (int i = num - 1; i >= 1; i--)
    {
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 2*i - 1; j++)
        {
            cout << "*";
        }
        for (int j = 1; j <= num - i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
    
    return 0;
}
