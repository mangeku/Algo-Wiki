#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll ; 
ll solve(map< ll , ll > &dp , ll n){
	if(n >= 0 && n <= 4) return n; 
	if(dp.find(n) != dp.end()) return dp[n]; 
	 
	dp[n] = max(n,solve(dp,n/2) + solve(dp,n/3) + solve(dp,n/4));
	return dp[n]; 
}
int main(){
	
	ll n ; 
	while(cin >> n){
		map< ll , ll > mp; 
		cout << solve(mp , n) << endl; 
	}
	
	return 0; 
}
