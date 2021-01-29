#include<bits/stdc++.h> 
using namespace std; 
int dp[1001][1001]; 
int solve(int H , int A , int flag){
	if(H <= 0 || A <= 0) return 0; 
	if(dp[H][A] != -1) return dp[H][A]; 
	if(flag){
		return solve(H+3,A+2,0)+1;
	}
	dp[H][A] = max(solve(H-5,A-10,1) , solve(H-20, A + 5,1)) + 1;
	return dp[H][A]; 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int H , A; 
		cin >> H >> A; 
		memset(dp , -1 , sizeof(dp)); 
		cout << solve(H+3,A+2,0) << endl;
	}
	return 0; 
}
