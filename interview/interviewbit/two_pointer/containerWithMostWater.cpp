#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int>&A){
	int n = A.size(); 
	int l = 0 , r = n - 1;
	int ans = 0; 
	while(l < r){
		ans = max(ans,min(A[l],A[r])*(r-l)); 
		if(A[l] < A[r]) l++; 
		else r--; 
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n); 
	for(int i = 0 ;i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr); 
	cout << ans << endl; 
	return 0; 
}
