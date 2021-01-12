#include<bits/stdc++.h> 
using namespace std; 
int solve(vector< int > & A){
	int n = A.size(); 
	int ans = 0; 
	for(int i = 0 ;i < n ; i++) 
		ans ^= A[i]; 
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > A(n); 
	for(int i = 0 ;i < n ; i++) cin >> A[i]; 
	int ans = solve(A); 
	cout << ans << endl; 
}
