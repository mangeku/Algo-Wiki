#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , k; 
		cin >> n >> k; 
		ll arr[n];
		for(int i = 0 ; i < n ; i++ ) cin >> arr[i]; 
		ll ans = (long long) 1e18; 
		sort(arr, arr + n); 
		for(int i = 0 ; i + k - 1 < n ; i++){
			ans = min(ans , arr[i+k-1]-arr[i]); 
		}
		cout << ans << endl;
	}
	return 0; 
}
