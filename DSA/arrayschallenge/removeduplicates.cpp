#include <bits/stdc++.h>
using namespace std;
// Remove duplicates from a sorted array.
// Brute force - Create a set and insert all the elements of the array into the set and then again insert all the elements from the set to the array from start. using STL
// Optimal - As the array is sorted, insert first element to the array, start checking from second element whether it is greater from the previous. if sattified insert it to 2nd position and so  on..
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    // Insert a sorted array.
    int i, j = 0;
    for(i = 1; i < n; i++){
        if(arr[i] > arr[j]){
            arr[j + 1] = arr[i];
            j++;
        }
    }
    cout << "The final array size is " << j+1 << " and the elements are: ";
    for(i = 0; i <= j; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
