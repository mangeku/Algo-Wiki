#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	ll l; 
	cin >> l; 
	vector< ll > dp(13);
	dp[0] = 1;
	ll n = l - 1; 
	for(int i = 1 ; i <= 11 ; i++){
		dp[i] = dp[i-1] * (n - i + 1)/(i); 
	}
	cout << dp[11] << endl;
	
	return 0;
}
