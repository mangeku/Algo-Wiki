#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int ans = 0; 
		int x; 
		for(int i = 0 ; i < n ;i++){
			cin >> x; 
			ans += (x%2); 
			ans %= 2; 
		}
		if(ans == 0) cout << 1 << endl; 
		else cout << 2 << endl; 
	}
}
