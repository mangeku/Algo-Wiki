#include<bits/stdc++.h> 
using namespace std; 

int solve(vector<int> &nums , int B){
	int j = 0;  
	int n  = nums.size(); 
	for(int i = 0 ;i < n ; i++){
		if(nums[i] != B) nums[j++] = nums[i]; 
	}
	return j; 
}

int main(){
	int n; 
	cin >> n; 
	int b; 
	cin >> b; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i]; 
	}
		
	return 0; 
}
