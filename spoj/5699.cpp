#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
int solve(int a , ll b){
	ll ans = 1; 
	while(b > 0){
		if(b%2){
			ans *= a;
			ans %= 10;  
			b--; 
		}
		else{
			a = a*a; 
			a %= 10; 
			b /= 2; 
		}
	}
	return ans%10; 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		string a; 
		ll b; 
		cin >> a >> b; 
		int n = a.size(); 
		cout << solve(a[n-1]-'0',b) << endl; 
	}
	return 0; 
}
