#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int>& nums) {
    vector<int> minPrefix(nums.begin(),nums.end());
    for(int i = 1 ; i < (int)nums.size() ; i++){
        minPrefix[i] = min(nums[i] , minPrefix[i-1]);
    }
    int ans = INT_MAX; 
    for(int i = 2; i <(int)nums.size() ; i++){
        ans = min(nums[i] + minPrefix[i-2] , ans);
    }
    return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i]; 
	}
	int ans = solve(nums); 
	cout << ans << endl; 
}
