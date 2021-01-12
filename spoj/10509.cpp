#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	const int mod = 1e6+7; 
	while(t--){
		ll n; 
		cin >> n; 
		ll ans = n*(3L*n+1)/2; 
		ans %= mod; 
		cout << ans << endl; 
	}
	
	return 0; 
}
