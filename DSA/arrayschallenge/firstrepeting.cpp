#include <bits/stdc++.h>
using namespace std;
// To print the smallest index of the element which gets repeted in the array.
int main(int argc, char const *argv[])
{
    int n, minindex = INT_MAX;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int N = 1000;
    int temp[N];
    for (int i = 0; i < N; i++)
    {
        temp[i] = -1;
    }
    for (int i = 0; i < n; i++)
    {
        if (temp[arr[i]] == -1)
        {
            temp[arr[i]] = i;
        }

        else
        {
            minindex = min(minindex, temp[arr[i]]);
        }
    }
    cout << minindex << endl;
    return 0;
}
