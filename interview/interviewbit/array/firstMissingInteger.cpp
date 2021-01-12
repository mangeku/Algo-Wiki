#include<bits/stdc++.h> 
using namespace std; 

int solve(vector<int> &nums){
	int n = nums.size(); 
	for(int i = 0 ; i < n ; i++){
		if(nums[i] <= 0 || nums[i] > n ) nums[i] = n + 1; 
	}
	for(int i = 0 ; i < n ; i++){
		int ind = abs(nums[i]); 
		if(ind > n) continue; 
		ind--; 
		if(ind >= 0){
			nums[ind] *= -1; 
		}
	}
	for(int i = 0 ;i < n ;i++){
		if(nums[i] >= 0) return i + 1; 
	}
	return n + 1; 
}
int main(){
	int n; 
	cin >> n; 
	vector<int> nums(n); 
	for(int i = 0 ; i < n ;i++) cin >> nums[i]; 
	int ans = solve(nums); 
	cout << ans << endl;	
	
	return 0; 
}
