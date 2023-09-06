#include <iostream>
using namespace std;
// This code counts the number of records
// The criteria for record is the number should be greater than all the previous elements and also greater thwan the next element.
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }
    int premx = 0, aft = arr[1];
    int record = 0;
    for(int i = 0; i < n; i++){
        if(i == n-1){
            aft = 0;
        }
        else{
            aft = arr[i+1];
        }
        if(arr[i] > aft && arr[i] > premx){
            record++;
        }
        premx = max(premx, arr[i]);
    }
    cout << record;
    return 0;
}
