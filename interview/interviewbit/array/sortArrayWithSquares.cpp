#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(vector<int> A){
	int n = A.size();
    vector< int> ans; 
    int l = 0 , r = n -1; 
    while(l <= r){
        if(abs(A[l]) >= abs(A[r])){
            ans.push_back(A[l]*A[l]); 
            l++; 
        }
        else{
            ans.push_back(A[r]*A[r]); 
            r--; 
        }
    }
    for(int i = 0 ; i < n/2 ; i++){
        swap(ans[i],ans[n-i-1]); 
    }
    return ans; 
	
}
int main(){
	int n; 
	cin >> n;
	vector<int> nums(n);
	for(int i = 0 ; i < n ; i++)
		cin >> nums[i]; 
	vector< int > ans = solve(nums);
	for(int i = 0 ; i < n ; i++)
		cout << ans[i] <<" "; 
	cout << endl; 
	return 0; 
}
