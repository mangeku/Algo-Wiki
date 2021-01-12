#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
const ll  limit = 4e6; 

int main(){
	
	ll ans = 2; 
	ll a = 1, b = 2; 
	for( ; b < limit ; ){
		ll sum = a + b; 
		a = b; 
		b = sum; 
		if(!(sum&1)) ans += sum; 
	}
	cout << ans << endl; 
	return 0; 
}
