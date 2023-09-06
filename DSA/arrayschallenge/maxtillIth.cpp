#include <iostream>
using namespace std;
// To find the maximum element of the given array.
void maxtill(int arr[], int n){
    int max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i] > max){
            max = arr[i];
        }
        cout << max << " ";
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    cout << "Enter the array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    maxtill(arr, n);
    return 0;
}
