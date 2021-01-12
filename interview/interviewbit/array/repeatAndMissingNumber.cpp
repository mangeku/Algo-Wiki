#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(const vector<int> & nums){
	vector<int>A; 
    for(int i = 0 ; i < (int) nums.size() ;i++) A.push_back(nums[i]); 
    int n = A.size();
    
    vector<int>ans; 
    for(int i = 0 ; i < n ; i++){
        int ind  = abs(A[i])-1; 
        if(A[ind] > 0) A[ind] *= -1; 
        else{
            ans.push_back(abs(A[i])); 
        }
    }
    for(int i = 0 ; i < n ;i++){
        if(A[i] > 0){
            ans.push_back(i+1); 
        }
    }
    return ans; 
}

int main(){
	int n; 
	cin >> n;
	vector< int > nums(n); 
	for(int i = 0 ; i < n ; i++){
		cin >> nums[i];
	}
	vector<int> ans =  solve(nums);
	cout << ans[0] << " " << ans[1] << endl; 
	
	return 0; 
}
