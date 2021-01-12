#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
int main(){
	string s; 
	while(1){
		cin >> s; 
		int n = s.size(); 
		if(n == 1 && s[0] == '0') return 0; 
		ll dp[n + 1]; 
		memset(dp , 0 , sizeof(dp));
		dp[0] = 1; 
		dp[1] = 1; 
		for(int i = 2 ; i <= n ; i++){
			if(s[i-1] != '0') dp[i] = dp[i-1]; 
			int x = (s[i-2]-'0')*10 + s[i-1] - '0'; 
			if(x > 9 && x <= 26) dp[i] += dp[i-2];
		}
		cout << dp[n] << endl; 
	}
	return 0; 
	
}
