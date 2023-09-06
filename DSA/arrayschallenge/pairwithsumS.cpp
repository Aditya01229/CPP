#include <bits/stdc++.h>
using namespace std;
// This code is to find a pair whose sum is S. Exists then return true else false.


// Brute force method with time complexity n2
bool method1(int arr[], int n, int sum){
    int flag = 0;
    for(int i = 0; i < n - 1; i++){
        for(int j = i + 1; j < n; j++){
            if(arr[i] + arr[j] == sum){
                return true;
            }
        }
    }
   return false;
    
}


// Another method with time complexity n and for this array should be sorted.
bool method2(int arr[], int n, int sum){
    int start = 0, end = n-1;
    while(start < end){
        if((arr[start] + arr[end]) == sum){
            return true;
        }
        else if((arr[start] + arr[end]) < sum){
            start += 1;
        }
        else if((arr[start] + arr[end]) > sum){
            end -= 1;
        }
    }
    return false;
}


int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int sum;
    cin >> sum;
    int arr[n];
    for(int i =0; i < n; i++){
        cin >> arr[i];
    }
    bool a = method1(arr, n, sum);
    cout << a << endl;
    a = method2(arr, n, sum);
    cout << a << endl;
    return 0;
}
