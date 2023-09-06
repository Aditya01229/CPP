#include <bits/stdc++.h>
using namespace std;

void missing(int arr[], int n, int m){
    int temp[m+1];
    cout << "The missing numbers are: ";
    for(int i = 0; i < m+1; i++){
        temp[i] = -1;
    }
    for(int i = 0; i < n; i++){
        temp[arr[i]] = i;
    }
    for(int i = 1; i < m+1; i++){
        if(temp[i] == -1){
            cout << i << " ";
        }
    }
}

int main(int argc, char const *argv[])
{
    cout << "Enter size of array and it's elements: ";
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    int m;
    cout << "Enter the number till what missing numbers are to be found: ";
    cin >> m;
    missing(arr, n, m);
    return 0;
}
