#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	cin >> n; 
	vector< string > A; 
	for(int i = 0 ; i < n ; i++)
		cin >> A[i]; 
	int ans = solve();
	
	return 0; 
}
