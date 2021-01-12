#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int> &A, int B){
	int n = A.size();
	sort(A.begin(), A.end());
	int minDiff = INT_MAX , ans = INT_MAX;  
	for(int i = 0 ; i < n ;i++){
		int l = i + 1 , r = n - 1; 
		while(l < r){
			int sum = A[l] + A[r] + A[i]; 
			if(abs(sum-B) < minDiff){
				minDiff = abs(sum-B);
				ans = sum; 
			}
			if(sum == B) return B; 
			else if(sum > B){
				r--; 
			}
			else l++; 
		}
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n;
	vector<int> nums(n); 
	for(int i = 0 ;i < n ; i++) cin >> nums[i]; 
	int B; 
	cin >> B; 
	int ans = solve(nums,B);
	cout << ans << endl; 
	return 0; 
}
