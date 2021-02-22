#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int mod = 1e7 + 7; 
ll fastExpo(ll n , ll k){
	ll ans = 1;
	while(k){
		if(k&1) ans = (ans*n)%mod; 
		n *= n; 
		n %= mod; 
		k /= 2; 
	}
	return ans%mod; 
}

int main(){
	ll n , k; 
	while(cin >> n >> k){
		if(n == 0 && k == 0) break; 
		ll res = 2*fastExpo(n-1,k)%mod + fastExpo(n,k)%mod + fastExpo(n,n)%mod + 2*fastExpo(n-1,n-1)%mod; 
		res %= mod; 
		cout << res << endl;
		
	}
	return 0; 
}
