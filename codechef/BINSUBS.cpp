#include<bits/stdc++.h> 
using namespace std; 
/*
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n;
		cin >> n; 
		string s; 
		cin >> s; 
		int dp[n + 1]; 
		for(int i = 0 ; i <= n ; i++) dp[i] = 1; 
		for(int i = 1 ; i < n ; i++){
			for(int j = 0 ; j < i ; j++){
				if(s[i] == '1') dp[i] = max(dp[j] + 1 , dp[i]);
				else{
					if(s[j] == '0') dp[i] = max(dp[j] + 1 , dp[i]); 
				}
			}
		}
		int maxi = 0; 
		for(int i = 0 ; i < n ; i++) maxi = max(dp[i] , maxi); 
		cout << n - maxi << endl; 
	}
	
}*/
int main(){
	ios_base::sync_with_stdio(false); 
    cin.tie(NULL);  
	cout.tie(NULL); 
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		string s; 
		cin >> s;
		int dp1[n] , dp2[n]; 
		memset(dp1 , 0 , sizeof(dp1)); 
		memset(dp2 , 0 , sizeof(dp2));
		int cnt0 = 0 , cnt1 = 0; 
		for(int i = 0 ; i < n ; i++){
			if(s[i] == '0') cnt0++; 
			else cnt1++; 
		}
		int ans = max(cnt0 , cnt1); 
		if(s[0] == '0') dp1[0] = 1; 
		for(int i = 1 ; i < n ; i++){
			if(s[i] == '0') dp1[i] = dp1[i-1] + 1; 
			else dp1[i] = dp1[i-1]; 
		}
		if(s[n-1] == '1') dp2[n-1] = 1; 
		for(int i = n - 2 ; i >= 0 ; i--){
			if(s[i] == '1') dp2[i] = dp2[i+1] + 1; 
			else dp2[i] = dp2[i+1];
		}
		for(int i = 0; i < n - 1 ; i++){
			ans = max(ans , dp1[i] + dp2[i+1]); 
		}
		cout << n - ans << endl;
	}
}  
