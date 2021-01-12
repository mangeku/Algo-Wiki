#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(int a , int b){
	if(a == INT_MIN && b == -1) return INT_MAX; 
	ll dividend = a , divisor = b; 
	int sign = ((dividend < 0)^(divisor<0)) ? -1 : 1; 
	dividend = abs(dividend); 
	divisor = abs(divisor); 
	ll ans = 0 , temp = 0; 
	for(int i = 31 ; i >= 0 ; i--){
		if(temp + (divisor<<i) <= dividend){
			temp += (divisor<<i); 
			ans |= 1ll<<i; 
		}
	}
	return (int)ans*sign; 
}
int main(){
	int a , b; 
	cin >> a >> b; 
	int ans = solve(a , b ); 
	cout << ans << endl; 
	
	return 0; 
}
