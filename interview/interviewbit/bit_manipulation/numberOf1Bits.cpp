#include<bits/stdc++.h> 
using namespace std; 
int solve(int x){
	int cnt = 0; 
	while(x){
		x = x & (x-1); 
		cnt++;
	}
	return cnt; 
}
int main(){
	unsigned int a; 
	cin >> a; 
	int ans =  solve(a); 
	cout << ans << endl; 
	return 0; 
}
