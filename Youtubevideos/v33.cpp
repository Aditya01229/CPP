#include <iostream>
using namespace std;

// This is a program based on constructor overloading and dynamic initialization(The constructor to run are decided during the run)
// Constructor calling a constructor needs to use the reference value to change the actual value otherwise the values doesn't get changed.
// This is not a perfect code but a great code for clearing many concepts...

class BankDeposit
{
    int principle, years;
    float rate, returnvalue;

public:
    BankDeposit()
    {
        cout << "Enter the values of p, r, n:";
        cin >> principle >> rate >> years;
        returnvalue = principle;
        if (rate >= 1)
        {
            rate = rate / 100;
            BankDeposit(principle, rate, years, returnvalue);
        }
        else
            BankDeposit(principle, rate, years, returnvalue);
    }

    BankDeposit(int p, float r, int n)
    {
        principle = p;
        rate = r;
        years = n;
        returnvalue = p;
        if (rate >= 1)
        {
            rate = rate / 100;
        }
        BankDeposit(principle, rate, years, returnvalue);
    }

    BankDeposit(int &p, float &r, int &n, float &rv)
    {
        for (int i = 0; i < n; i++)
        {
            rv = rv * (1 + r);
        }
    }

    void Show()
    {
        cout << "The return amount for principle of Rs." << principle
             << " after " << years
             << " Years at rate of " << rate
             << " is " << returnvalue << endl;
    }
};

int main(int argc, char const *argv[])
{
    BankDeposit bd1(100, 10, 1);
    bd1.Show();

    BankDeposit bd2;
    bd2.Show();

    BankDeposit bd3(100, 0.1, 1);
    bd3.Show();

    return 0;
}
