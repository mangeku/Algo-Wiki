#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int mod = 1000003; 
int solve(string A){
	bool fre[260] = {false}; 
	int n = A.size(); 
	for(int i = 0 ; i < n ; i++){
		fre[(int)A[i]]  = true; 
	}
	ll fact[260]; 
	fact[0] = 1; 
	for(int i = 1 ; i <= n ; i++){
		fact[i] = (fact[i-1]*i)%mod;  
	}
	ll ans = 0; 
	for(int i = 0 ; i < n ; i++){
		ll cnt = 0; 
		for(int j = 0 ; j < A[i] ; j++){
			if(fre[j]) cnt++; 
		}
		fre[(int)A[i]]= false; 
		ans += cnt*fact[n-i-1]; 
		ans %= mod; 
	}
	return (ans+1)%mod; 
}

int main(){
	string s; 
	cin >> s; 
	int ans = solve(s); 
	cout << ans << endl; 
}
