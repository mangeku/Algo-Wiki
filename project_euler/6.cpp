#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	ll n = 100; 
	ll ans = n*(n+1)/2; 
	ans *= ans; 
	ans -= ((n)*(n+1)*(2*n+1)/6); 
	cout << ans << endl; 
}
