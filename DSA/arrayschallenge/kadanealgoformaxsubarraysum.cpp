#include <bits/stdc++.h>
using namespace std;
// Finding maximum sum of a subarray using kadane algo using only one loop.
// We just need to not include negative total therefore we just initialize the sum = 0 when it goes negative.
// Ex - -1 4 -6 7 -5  -- In this first sum = -1 so initial to 0 then 4 then 2 - 6 = -2 again initialize to 0 then 7 then 3.
// Here we got 7 as max after each iterate we need to update the Maxvariable.
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i< n; i++){
        cin >> arr[i];
    }
    int Sum = 0, maxvar = INT_MIN;
    for(int i = 0; i < n; i++){
        Sum += arr[i];
        maxvar = max(maxvar, Sum);
        if(Sum < 0){
            Sum = 0;
        }
    }
    cout << maxvar << endl;
    return 0;
}
