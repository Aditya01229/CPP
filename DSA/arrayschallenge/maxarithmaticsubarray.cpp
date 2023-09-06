#include <iostream>
using namespace std;
// To find the maximum length of the arithmetic subarray(Subarray in A.P) 
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int length, pd, cd, ans = 2;
    pd = arr[1] - arr[0];
    int j = 2;
    length = 2;
    while(j < n){
        cd = arr[j] - arr[j-1];
        if(cd == pd){
            length++;
        }
        else{
            pd = cd;
            length = 2;
        }
        ans = max(ans, length);
        j++;
    }
    cout << ans;
    return 0;
}
