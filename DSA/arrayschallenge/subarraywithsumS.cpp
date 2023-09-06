#include <bits/stdc++.h>
using namespace std;
// This code print the index of the subarray whose elements sum is equal to the required input sum.
// Only print the Subarray with smallest index.
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int S;
    cin >> S;
    int flag = 1;
    for (int i = 0; i < n && flag == 1; i++)
    {
        int sum = 0;
        for (int j = i; j < n && sum < S; j++)
        {
            sum += arr[j];
            if (sum == S)
            {
                cout << i << " " << j << endl;
                flag = 0;
            }
        }
    }
    return 0;
}
