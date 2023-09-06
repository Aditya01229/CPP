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

    int r_s = 0, r_e = r-1, c_s = 0, c_e = c-1;
    while(r_e >= r_s && c_e >= c_s){
        for(int i = c_s; i <= c_e && r_s <= r_e; i++){
            cout << arr[r_s][i] << " ";
        }
        r_s++;
        for(int i = r_s; i <= r_e && c_s <= c_e; i++){
            cout << arr[i][c_e] << " ";
        }
        c_e--;
        for(int i = c_e; i >= c_s && r_s <= r_e; i--){
            cout << arr[r_e][i] << " ";
        }
        r_e--;
        for(int i = r_e; i >= r_s && c_s <= c_e; i--){
            cout << arr[i][c_s] << " ";
        }
        c_s++;
    }
    return 0;
}
