#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int> &nums , int b){
	int cnt = 0; 
	for(int i = 0 ;i < b ; i++){
		cnt += nums[i]; 
	}
	int ans = cnt;
	int j = nums.size() - 1; 
	for(int i = b - 1 ; i >= 0 ; i--){
		cnt = cnt + nums[j] - nums[i]; 
		ans = max(ans,cnt); 
		j--; 
	}
	return ans; 
}
int main(){
	int n , b; 
	cin >> n >> b; 
	vector<int> nums(n); 
	for(int i = 0 ; i < n ; i++) 
		cin >> nums[i]; 
	int ans = solve(nums,b); 
	cout << ans << endl; 
	return 0; 
}
