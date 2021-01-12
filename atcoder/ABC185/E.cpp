#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	ll n , m; 
	cin >> n >> m; 
	vector< ll > a(n) , b(m);
	for(int i = 0 ; i < n ; i++)
		cin >> a[i]; 
	for(int i = 0 ;i < m ; i++)
		cin >> b[i]; 
	vector< vector< ll > > dp(n + 1 , vector< ll > (m+1));
	for(int i = 0 ; i <= n ; i++){
		for(int j = 0 ; j <= m ; j++){
			if(i == 0 || j == 0)
				dp[i][j] = i + j; 
			else
				dp[i][j] = min({dp[i-1][j-1] + (a[i-1] != b[j-1]) , dp[i-1][j]+1 , dp[i][j-1]+1});
		}
	}
	cout << dp[n][m] << endl; 
	return 0; 
}
