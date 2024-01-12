#include <iostream>
#include <time.h>
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    clock_t start, end;
    start = clock();
    for (int i = 0;; i++)
    {
        end = clock();
        double time_taken = double(end - start) / double(CLOCKS_PER_SEC);
        if (int(time_taken) == 1)
        {
            cout << i << endl;
            cout << time_taken;
            break;
        }
    }

    return 0;
}
