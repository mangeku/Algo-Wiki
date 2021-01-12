#include<bits/stdc++.h> 
using namespace std; 
bool solve(int A){
	string s = to_string(A); 
	int n = s.size(); 
	for(int i = 0 ; i < n/2 ;i++){
		if(s[i] != s[n-i-1]) return false; 
	}
	return true; 
}

int main(){
	int A; 
	cin >> A; 
	bool ans = solve(A); 
	if(ans) cout << "Yes" << endl; 
	else cout << "No" << endl; 
	return 0; 
}
