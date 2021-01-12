#include<bits/stdc++.h> 
using namespace std; 
const int mod = 1e9 + 7; 
int solve(int n){
	n++; 
	int cnt = n/2; 
	int power = 2; 
	while(power <= n){
		int pairs = n/power; 
		cnt += (pairs/2)*power; 
		cnt += (pairs&1) ? n%power : 0; 
		cnt %= mod; 
		power <<= 1; 
	}
	return cnt; 
}
int main(){
	int n; 
	cin >> n;
	int ans = solve(n);
	cout << ans << endl; 
	
	return 0; 
}
