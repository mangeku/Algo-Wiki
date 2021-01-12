#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
const ll mod = 1e9 + 7; 
 
ll powmod(ll base, ll exponent){
	if(exponent < 0) exponent += mod - 1; 
	ll ans = 1; 
	while(exponent){
		if(exponent&1) ans =(ans*base)%mod; 
		base = (base*base)%mod; 
		exponent /= 2; 
	} 
	return ans; 
}
int solve(int A , vector< int > &B){
	sort(B.begin(),B.end()); 
	ll fact[10000]; 
	fact[0] = 1; 
	for(int i = 1 ; i < 10000 ; i++){
		fact[i] = (fact[i-1]*i)%mod; 
	}
	vector<ll> vs; 
	vs.push_back(B[0]-1);
	int n = B.size() ; 
	for(int i = 1 ; i < n ;i++){
		vs.push_back(B[i]-B[i-1]-1); 
	}
	vs.push_back(A-B[n-1]);
	ll sum = 0 , pro = 1; 
	ll ans = 1; 
	int m = vs.size();
	for(int i = 0 ; i < m ; i++){
	    if(vs[i] == 0) continue; 
		if(i != 0 && i != m - 1) ans = (ans * powmod(2 , vs[i]-1))%mod;
		sum = (sum + vs[i])%mod; 
		pro = (pro*fact[vs[i]])%mod;
	}
	ans = (ans*fact[sum])%mod; 
	ans = (ans*powmod(pro,mod-2))%mod; 
	return ans; 
	
}
int main(){
	int n; 
	cin >> n; 
	int b; 
	cin >> b; 
	vector<int> nums(b); 
	for(int i = 0 ; i < b ;i++){
		cin >> nums[i]; 
	}
	int ans = solve(n,nums); 
	cout << ans << endl; 	
	
	return 0; 
}
