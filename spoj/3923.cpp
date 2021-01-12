#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m; 
		cin >> n >> m; 
		int arr[n+1][m + 1]; 
		memset(arr,0,sizeof(arr));  
		for(int i = 1 ;i <= n ; i++){
			for(int j = 1 ; j <= m ; j++) cin >> arr[i][j]; 
		}
		int dp[n + 2][m+2]; 
		memset(dp, 0 , sizeof(dp)); 
		for(int i = 1 ; i <= n ; i++){
			for(int j = 1 ; j <= m ; j++){
				dp[i][j] = max({dp[i-1][j-1],dp[i-1][j],dp[i-1][j+1]}) + arr[i][j]; 
			}
		}
		int ans = 0; 
		for(int j = 0 ; j <= m ; j++){
			ans = max(ans , dp[n][j]); 
		}
		cout << ans << endl; 	
	}
	
	return 0; 
}
