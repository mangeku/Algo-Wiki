#include<bits/stdc++.h> 
using namespace std; 

vector<vector<int>> solve(vector<int>&A){
	sort(A.begin(),A.end()); 
   vector<vector<int>> ans; 
	int n = A.size(); 
	if(n <= 2) return ans; 
	for(int i = 0 ;i < n - 2; i++){ 
			int l = i + 1 , r = n - 1; 
			if(i > 0 && A[i] == A[i-1]) continue; 
			while(l < r){
			    long long sum =0LL + A[i] + A[r] + A[l]; 
				if(sum == 0){
					vector<int> temp = {A[i],A[l],A[r]}; 
					ans.push_back(temp); 
					while(l < n - 1 && A[l] == A[l+1]) l++; 
					while(r > 0 && A[r] == A[r-1]) r--; 
					l++; 
					r--; 
				}
				else if(sum > 0){
					r--; 
				}
				else 
					l++; 
			}
	}
	return ans; 
}
void show(vector<vector<int>> &ans){
	int n = ans.size(); 
	for(int i = 0 ; i < n ;i++){
		cout << ans[i][0] << " " << ans[i][1] << " " << ans[i][1] << endl; 
	}
	
}
int main(){
	int n; 
	cin >> n; 
	vector<int>nums(n); 
	for(int i= 0 ; i < n; i++) cin >> nums[i]; 
	vector<vector<int>> ans = solve(nums); 
	show(ans);
}
