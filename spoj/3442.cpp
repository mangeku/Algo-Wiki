#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int mod = 10; 
ll lastDig(ll base , ll exp){
	ll ans = 1; 
	while(exp){
		if(exp&1) ans = (ans*base)%mod; 
		base = (base*base)%mod; 
		exp /= 2;
	}
	return ans%mod; 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int a , b; 
		cin >> a >> b;
		if(a == 0){
			cout << 0 << endl; 
			continue; 
		} 
		cout << lastDig(a,b); 
		cout << endl; 
	}
}
