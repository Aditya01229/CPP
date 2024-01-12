#include <bits/stdc++.h>
using namespace std;

// Just check whether the next element is greater or equal to previous one. If this gets follow array is sorted.
int main(int argc, char const *argv[])
{
    int n; cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    bool check = 1;
    for(int i = 0; i < n-1; i++){
        if(arr[i] > arr[i+1]){
            check = 0;
            break;
        }
    }

    cout << check;
    return 0;
}
