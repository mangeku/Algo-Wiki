#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int arr[101]; 
int mod = 100; 
int main(){
	int n; 
	while(cin >> n){
		for(int i = 1 ; i <= n ; i++) cin >> arr[i]; 
		ll dp[101][101]; 
		int sum[101][101]; 
		memset(dp,0,sizeof(dp)); 
		memset(sum,0, sizeof(sum)); 
		for(int i = 1 ; i <= n ; i++) sum[i][i] = arr[i]; 
		for(int l = 2 ; l <= n ; l++){
			for(int i = 1; i + l - 1 <= n ; i++){
				int j = i + l - 1; 
				dp[i][j] = INT_MAX; 
				//cout << i << " " << j << endl; 
				for(int k = i ; k < j ; k++){
					ll temp = dp[i][k] + dp[k+1][j] + (sum[i][k]*sum[k+1][j]);
					ll sumtemp = (sum[i][k]+sum[k+1][j])%mod; 
					if(temp < dp[i][j]){
						dp[i][j] = temp; 
						sum[i][j] = sumtemp; 
					}
				}
			}
		}
		cout << dp[1][n] << endl; 
	}
}
