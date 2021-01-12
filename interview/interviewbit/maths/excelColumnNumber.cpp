#include<bits/stdc++.h> 
using namespace std; 
int solve(string A){
	int ans = 0; 
	int n = A.size(); 
	for(int i = 0 ; i < n ; i++){
		ans = ans*26 + (A[i] - 'A' + 1); 
	}
	return ans; 
}
int main(){
	string s; 
	cin >> s; 
	int ans = solve(s); 
	cout << ans << endl; 
	return 0; 
}
