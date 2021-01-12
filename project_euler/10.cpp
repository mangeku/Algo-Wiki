#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
ll n = 2e6; 

int main(){
	bool prime[n+1]; 
	memset(prime , true , sizeof(prime));
	for(ll i = 3 ; i*i <= n ; i += 2){
		if(prime[i]){
			for(ll j = i*i ; j <= n ; j += i){
				prime[j] = false; 
			}
		}
	}
	ll ans = 2; 
	for(int i = 3 ; i <= n ; i += 2){
		if(prime[i])
			ans += i; 
	}
	cout << ans << endl; 
	return 0; 
}
