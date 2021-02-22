#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll n , k; 
		cin >> n  >> k;  
		ll arr[n]; 
		bool flag = false; 
		for(int i = 0 ; i < n ; i++){
			cin >> arr[i]; 
			if(arr[i] == 1) flag = true; 
		}
		ll sum = 0; 
		for(int i = 0 ; i < n ;i++){
			sum += arr[i]; 
		} 
		if( sum%k == 0 || flag) cout << "YES" << endl; 
			else cout << "NO" << endl; 
			
		}

	
	
	return 0; 
}
