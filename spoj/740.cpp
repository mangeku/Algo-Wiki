#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 2001; 
int dp[nax][nax]; 
int arr[nax]; 
ll solve(int l , int r , int cnt){
	if(l == r) return dp[l][r]; 
	if(l > r) return INT_MIN; 
	if(dp[l][r] != -1) return dp[l][r]; 
	ll res = max(1LL*cnt*arr[l] + solve(l + 1 , r , cnt+1) , 1LL*cnt*arr[r] + solve(l , r - 1 , cnt + 1));
	return dp[l][r] = res; 
}
int main(){
	int n; 
	cin >> n; 
	memset(dp,-1,sizeof(dp)); 
	for(int i = 1 ; i <= n ; i++){
		cin >> dp[i][i]; 
		arr[i] = dp[i][i]; 
		dp[i][i] *= n; 
	}
	cout << solve(1,n,1) << endl; 
	return 0;
}
