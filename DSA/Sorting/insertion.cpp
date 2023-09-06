#include <iostream>
using namespace std;

void insertion(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        int current = arr[i];
        int j;
        for (j = i-1; j >= 0 && current < arr[j]; j--)
        {
                arr[j+1] = arr[j];
        }
        arr[j+1] = current;
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    insertion(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
