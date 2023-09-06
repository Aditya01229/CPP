#include <bits/stdc++.h>
using namespace std;
// Brute - To sort and then go to array from behind and print the first number from back which is not equal to the largest number(Number at the last n-1 index) as there can be multiple largest numbers.
// Better is to go through the array first find the largest and then again go through array and store secondlargest as ( arr[i] > secondlargest && arr[i] < largest)
// Optimal to maintain 2 variable largest and second largest
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int arr[n]; 
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    int l = arr[0], sl = INT_MIN;
    for(int i = 1; i < n; i++){
        if(arr[i] > l){
            sl = l;
            l = arr[i];
        }
        else if(arr[i] > sl && arr[i] < l){
            sl = arr[i];
        }
    }
    cout << sl << endl;
    return 0;
}
