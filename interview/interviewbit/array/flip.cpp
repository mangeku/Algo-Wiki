// this is just the variation of kadane's algorithm
#include<bits/stdc++.h> 
using namespace std; 
vector< int > solve(string s){
	vector< int > ans; 
	int n = s.size(); 
	vector< int > arr(n);
	for(int i = 0 ; i < n ; i++){
		if(s[i] == '0') arr[i] = 1;
		else arr[i] = -1; 
	}
	int cur = 0 , maxSum = INT_MIN , left = 0 , leftans = 0 , rightans = 0; 
	for(int i = 0 ; i < n ; i++){
		cur += arr[i]; 
		if(cur < 0){
			left = i + 1; 
			cur = 0; 
		}
		if(cur > maxSum){
			leftans = left; 
			rightans = i; 
			maxSum = cur; 
		}
	}
	if(maxSum <= 0){
		return ans;
	}
	ans.push_back(leftans + 1);
	ans.push_back(rightans + 1);
	return ans; 
	
}
int main(){
	string s; 
	cin >> s; 
	vector< int > ans = solve(s);
	if(ans.size() == 0) cout << "No need to flip because it will not cause any change to the number of 0" << endl; 
	else cout << "flip required from " << ans[0] << " to " << ans[1] << endl; 
	return 0; 
}
