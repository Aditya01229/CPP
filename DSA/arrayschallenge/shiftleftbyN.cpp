#include <bits/stdc++.h>
using namespace std;

void method1(int arr[], int n, int shift)
{
    /*
    for worst case shift = n
    Time complexity = n+n = 2n
    O(n)
    */
    int temp[shift];
    for (int i = 0; i < shift; i++)
    {
        temp[i] = arr[i];
    }
    for (int i = shift; i < n; i++)
    {
        arr[i - shift] = arr[i];
    }
    for (int i = n - shift, j = 0; i < n; i++, j++)
    {
        arr[i] = temp[j];
    }
}

void method2(int arr[], int n, int shift)
{
    /*
    for worth case shift = n
    time complexity = n*(n-1) = nsquare
    O(n2)
    */
    for (int i = 0; i < shift; i++)
    {
        int temp = arr[0];
        for (int j = 1; j < n; j++)
        {
            arr[j - 1] = arr[j];
        }
        arr[n - 1] = temp;
    }
}

int main(int argc, char const *argv[])
{
    cout << "Enter size of array and array elements!";
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Shift: ";
    int shift;
    cin >> shift;
    method2(arr, n, shift);

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
