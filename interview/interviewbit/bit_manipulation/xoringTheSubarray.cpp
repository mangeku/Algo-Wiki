#include<bits/stdc++.h> 
using namespace std; 
int solve(vector< int > &arr){
	int ans = 0; 
	int n = arr.size(); 
	for(int i = 0 ; i < n ; i++){
		if((1LL*(i+1)*(n-i)) % 2) 
			ans ^= arr[i]; 
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
}
