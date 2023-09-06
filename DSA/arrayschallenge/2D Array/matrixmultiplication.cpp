#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
    int r1, cr, c2;
    cout << "Enter the values: ";
    cin >> r1 >> cr >> c2;
    int arr1[r1][cr], arr2[cr][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < cr; j++)
        {
            cin >> arr1[i][j];
        }
    }
    for (int i = 0; i < cr; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cin >> arr2[i][j];
        }
    }
    int ans[r1][c2];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            int sum = 0;
            for (int k = 0; k < cr; k++)
            {
                sum += (arr1[i][k] * arr2[k][j]);
            }
            ans[i][j] = sum;
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            cout << ans[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
