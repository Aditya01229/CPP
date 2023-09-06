#include <bits/stdc++.h>
using namespace std;
// This code is to find the smallest missing positive number in a given array..
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    bool check[1000];
    for(int i = 0; i < 1000; i++){
        check[i] = 0;
    }
    for(int i = 0; i < n; i++){
        if(arr[i] >= 0){
            check[arr[i]] = 1;
        }
    }
    for(int i = 0; i < 1000; i++){
        if(check[i] == 0){
            cout << i << endl;
            break;
        }
    }
    return 0;
}
