#include <bits/stdc++.h>
using namespace std;

// Brute force make a vector and push all the non zero elements to it. After this put the elements of this vector to main array sing loop till vector.size()
// then put zero in the remaining spaces of the array..


// Here I'm writing the optimal solution by maintaining two pointing iterators..
// j will increment only when a non zero element occurs and ith index element set equal to 0 to complete the purpose in one loop as the need of ith element gets completed.
int main(int argc, char const *argv[])
{
    int n; cin >> n;
    int arr[n];
    for(int i = 0; i < n; i++)
    cin >> arr[i];
    for(int i = 0, j = 0; i < n; i++){
        if(arr[i] != 0){
            arr[j++] = arr[i];
            arr[i] = 0;
        }
    }

    for(int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    return 0;
}
