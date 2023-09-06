#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int r, c;
    cin >> r >> c;
    int arr[r][c];
    for(int i = 0; i < r; i++){
        for(int j = 0; j < c; j++){
            cin >> arr[i][j];
        }
    }
    cout << "Transpose matrix is: " << endl;
    for(int i = 0; i < c; i++){
        for(int j = 0; j < r; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

// OR WE CAN DO BY MAKING NEW MATRIX AND STORING THERE.
// FOR SQUARE MATRIX WE CAN DO WITH DIFFERENT WAY BY DIRECTLY MAKING CHANGES IN ORIGINAL MATRIX AS THE DIAGONAL ELEMENTS REMAINS SAME AND THE ELEMENTS BESIDE DIAGONAL GETS EXCHANGED.
    return 0;
}
