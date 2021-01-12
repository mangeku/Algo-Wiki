#include<bits/stdc++.h> 
using namespace std;
typedef long long ll;
bool solve(vector<ll>&a , ll cnt , ll var){
	ll x = a[0]; 
	ll c = 1; 
	int n = a.size(); 
	for(int i = 1 ; i < n ; i++){
		if(a[i] - x >= var){
			c++; 
			x = a[i]; 
		}
	}
	return c >= cnt; 
}  
int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll n , c; 
		cin >> n >> c; 
		vector< ll > arr(n); 
		
		
		for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
		sort(arr.begin(),arr.end()); 
		ll l = 0 , r = 1e9; 
		ll ans = 0; 
		while(l <= r){
			ll mid = l + (r - l)/2; 
			if(solve(arr,c,mid)){
				ans = mid; 
				l = mid + 1; 
			}
			else{
				r = mid - 1; 
			}
		}
		cout << ans << endl;
	}
	
	return 0; 
}
