#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t;
	while(t--){
		string s; 
		cin >> s; 
		int n = s.size(); 
		ll dp[n+1][n+1];
		memset(dp ,0 , sizeof(dp)); 
		for(int i = 1 ; i < n ; i++){
			for(int l = 0 , r = i ; r < n ; l++ , r++){
				dp[l][r] = (s[l]==s[r]) ? dp[l+1][r-1] : min(dp[l][r-1],dp[l+1][r]) + 1; 
			}
		}
		cout << dp[0][n-1] << endl; 
		
	}
	
	return 0;
}
