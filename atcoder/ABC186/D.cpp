#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

ll solve(vector<ll> &a){
	int n = a.size();
	vector< ll > suf(n  + 1, 0);
	for(int i = n - 1 ; i >= 0 ; i--){
		suf[i] =suf[i+1] + a[i]; 
	}
	ll ans = 0; 
	for(int i = 0 ; i + 1 < n ; i++){
		ans += (a[i]*(n - 1 - i) - suf[i + 1]); 
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< ll > a(n);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i]; 
	sort(a.rbegin() , a.rend());
	ll ans  = solve(a);
	cout << ans << endl; 
	return 0; 
}
