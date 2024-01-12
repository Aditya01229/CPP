#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin >> t;
	while(t--){
	    int x;
        cin >> x;
	    vector<int> v(x);
	    for(int i = 0; i < x; i++){
	        cin >> v[i];
	    }
	    int reqnum = v[x-1]+v[x-2]-v[x-3];
        cout << reqnum << endl;
	    bool check = 1;
	    for(int i = 0; i < x-3; i++){
	        if(v[i] != reqnum){
	            check = 0;
	            break;
	        }
	    }
        cout << check << endl;
	    if(check == 1){
	        cout << "NO" << endl;
	    }
	    else{
	        cout << "YES" << endl;
	    }
	}
	return 0;
}
