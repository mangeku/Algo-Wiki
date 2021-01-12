#include<bits/stdc++.h> 
using namespace std; 
bool solve(vector<int>& nums, int k) {
    unordered_map< int , int > mp;
    for(int i = 0 ; i < (int)nums.size() ; i++){
        if(mp[k-nums[i]] == 1)
            return true; 
        mp[nums[i]] = 1; 
    }
    return false; 
}
int main(){ 
	int n , k; 
	cin >> n >> k; 
	vector< int> nums(n); 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i]; 
	}
	bool ans = solve(nums,k); 
	if(ans)
			cout << "yes" << endl ;
	else 
			cout << "No" << endl; 
	
	return 0; 
}
