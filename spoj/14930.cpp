#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	for(int it = 1 ; it <= t ; it++ ){
		int n; 
		cin >> n; 
		vector< ll > a(n + 1); 
		for(int i = 1 ; i <= n ; i++) cin >> a[i]; 
		ll dp[n+1];
		memset(dp,0,sizeof(dp));
		dp[0] = 0;  
		dp[1] = a[1]; 
		for(int i = 2 ; i <= n ; i++){
			dp[i] = max(a[i]+dp[i-2],dp[i-1]);
		}
		cout << "Case " << it<<": " << dp[n] << endl; 
	}

	return 0; 
	
}
