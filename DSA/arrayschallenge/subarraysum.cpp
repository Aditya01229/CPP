#include <iostream> 
using namespace std;
// This code is to find the Sum of all the subarrays.
void subarraysum(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = i; j < n; j++)
        { 
            sum += arr[j];
            cout << "Subarray[" << i << ", " << j <<"] = " << sum << endl;
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Enter the array: ";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    subarraysum(arr, n);
    return 0;
}
