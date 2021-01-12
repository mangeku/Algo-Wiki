#include<bits/stdc++.h> 
using namespace std; 

int solve(vector< int > & nums){
	int n = nums.size(); 
	int k = 0;
	for(int i = 0 ; i < n ; i++)
	{
		if(i < n - 1 && nums[i] == nums[i+1]) continue; 
		else nums[k++] = nums[i]; 
	}
	return k; 
}
int main(){
	int n; 
	cin >> n;
	vector<int> nums(n); 
	for(int i = 0 ;i < n ;i++) cin >> nums[i]; 
	int k = solve(nums); 
	for(int i = 0 ; i < k ;i++) cout << nums[i] << " "; 
	cout << endl ;
	return 0; 
}
