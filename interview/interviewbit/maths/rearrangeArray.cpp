#include<bits/stdc++.h> 
using namespace std; 

void solve(vector<int> &nums){
	int n = nums.size(); 
	for(int i = 0 ; i < n ; i++){
		nums[i] += (nums[nums[i]]%n)*n;
	}
	for(int i = 0 ; i < n ; i++){
		nums[i] = nums[i]/n; 
	}
	return ; 
}
int main(){
	int n; 
	cin >> n; 
	for(int i = 0 ; i < n ;i++)
		cin >> nums[i]; 
	for(int i = 0 ; i < n ;i++)
		cout << nums[i] << " ";
	cout << endl; 
	
	return 0; 
}
