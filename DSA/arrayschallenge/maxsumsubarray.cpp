#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n], ans = INT_MIN;
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    for(int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum += arr[j];
            ans = max(ans, sum);
        }
    }
    cout << ans;
    return 0;
}
