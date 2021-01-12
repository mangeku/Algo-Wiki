#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
ll val = 600851475143;  

int main(){
	ll ans = 0; 
	if(val%2 == 0){
		ans = 2; 
		while(ans%2==0) ans/=2; 
	}
	ll lim = sqrt(val);
	for(ll i = 3 ; i <= lim ; i += 2){
		while(val%i == 0){
			ans = i; 
			val /= i; 
		}
	}
	if(val > 2){
		ans = max(ans , val);
	}
	cout << ans << endl; 
	return 0; 
}
