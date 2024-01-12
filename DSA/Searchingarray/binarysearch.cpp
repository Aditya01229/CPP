#include <iostream>
// #define MID ((start+end) / 2)
using namespace std;

void sort(int arr[], int n){

}

int binarysearch(int arr[], int n, int key){
    int start = 0;
    int end = n-1;
    while(start <= end){
    int MID = (start+end) / 2;
    cout << MID << start << end << endl;
    if(arr[MID] == key){
        return MID;
    }
    else if(arr[MID] > key){
        end = MID - 1;
    }
    else if(arr[MID] < key){
        start = MID + 1;
    }
    }
    return -1;
}
int main(int argc, char const *argv[])
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int key;
    cout << "Enter the key to search: ";
    cin >> key;
    cout << binarysearch(arr, n, key);

    
    return 0;
}
