#include<bits/stdc++.h> 
using namespace std; 
int solve(vector<int>& a, int B){
	int n= a.size();
	sort(a.begin(),a.end());  
	int i = 0 , j = 1; 
	while(j < n){
		int dif = a[j] - a[i]; 
		if(i != j && dif == B) return 1; 
		else if(dif > B) i++; 
		else j++; 
	}
	return 0; 
}
int main(){
	int n, k;
	cin >> n >> k; 
	vector<int>nums(n); 
	for(int i = 0 ; i< n ;i++)
		cin >> nums[i]; 
	int ans = solve(nums,k); 
	if(ans) cout << "Yes there have pair with sum 0" << endl; 
	else cout << "Don't have any pair with sum 0" << endl; 
	
	return 0; 
}
