#include<bits/stdc++.h> 
using namespace std; 
bool cmp(int a , int b){
	if(to_string(a)+to_string(b) >= to_string(b)+to_string(a)) return true; 
	else return false; 
}
string solve(vector< int > &nums){
	sort(nums.begin() , nums.end() , cmp); 
	string ans = ""; 
	int n = nums.size(); 
	for(int i = 0 ; i < n ; i++){
		ans += to_string(nums[i]); 
	} 
	while((int)ans.size() > 1 && ans[0] == '0'){
		ans.erase(0,1); 
	}
	return ans; 
}	
int main(){
	int n; 
	cin >> n; 
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++) cin >> nums[i]; 
	string ans = solve(nums); 
	cout << ans << endl; 
	
	return 0; 
}
