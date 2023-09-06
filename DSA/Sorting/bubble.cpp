#include <iostream>
using namespace std;
// As like bubble the maximum element get coming to the top(end) of the array therefor this sorting is called bubble sort...

void bubble(int arr[], int n){
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < n-i; j++)
        {
            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
        
    }
    
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    cout << "Array:\n";
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    bubble(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    
    return 0;
}
