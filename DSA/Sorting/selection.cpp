#include <iostream>
using namespace std;
// In this we start selecting a position and find the perfect number fitting in that position. i.e. we start from the 0th position and fill t with the smallest element. Therefore this sorting is called selection sorting..

void selection(int a[], int n){
    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(a[j] < a[i]){
                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
        
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

    selection(arr, n);
    cout << "The sorted array is: " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    
    return 0;
}
