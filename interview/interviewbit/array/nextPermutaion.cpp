#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(vector<int> &nums){
	int n =  nums.size();
	int last = n - 1;  
	bool flag = true; 
	for(int i = n - 1 ; i > 0 ; i--) 
	{
		if(nums[i] > nums[i-1]){
			last = i; 
			flag = false; 
			break; 
		}
	}
	if(flag){
		reverse(nums.begin() , nums.end()); 
		return nums; 
	}
	int toSwap;
	for(int i = n - 1; i >= last ; i--){
		if(nums[i] >= nums[last - 1]){ 
				toSwap = i; 
				break; 
		}
	}
	swap(nums[last - 1] , nums[toSwap]); 
	sort(nums.begin() + last , nums.end()); 
	return nums; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i< n ; i++ )
		cin >> nums[i]; 
	vector< int > ans = solve(nums); 
	int m = ans.size(); 
	for(int i = 0 ; i < m ;i++) 
		cout << ans[i] << " "; 
	cout << endl;
	return 0;  
}
