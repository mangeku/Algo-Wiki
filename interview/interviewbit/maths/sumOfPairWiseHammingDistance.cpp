#include<bits/stdc++.h> 
using namespace std; 
const int mod = 1e9 + 7; 
int solve(vector<int> nums){
	int n = nums.size();
	int ans = 0;  
	for(int i = 0 ; i < 31 ; i++){
	    int cnt = 0; 
		for(int j = 0 ; j < n ; j++){
			if(nums[j] & (1<<i)) cnt++; 
		}
		ans += ((2LL*cnt*(n-cnt)))%mod; 
	    if(ans >= mod) ans -= mod; 
	}
	return ans; 
}

int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ;i++)
		cin >> nums[i]; 
	int ans = solve(nums); 
	cout << ans << endl; 
	
	return 0; 
}
