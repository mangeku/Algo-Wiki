#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int mod = 1e9 + 7; 
int solve(vector<int>&nums){
	int n = nums.size(); 
	sort(nums.begin(),nums.end()); 
	int cnt = 0; 
	for(int i = n - 1 ; i >= 1 ; i--){
		int l = 0  , r = i - 1; 
		while(l < r){
			int sum = nums[l] + nums[r]; 
			if(sum > nums[i]){
				cnt += (r-l); 
				cnt %= mod; 
				r--;
			}
			else{
				l++; 
			}
		}
	}
	return cnt; 
}
int main(){
	int n; 
	cin >> n; 
	vector<int>nums(n); 
	for(int i = 0 ; i < n ;i++) cin >> nums[i]; 
	int ans = solve(nums); 
	cout << ans << endl; 
}
