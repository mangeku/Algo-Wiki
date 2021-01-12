#include<bits/stdc++.h> 
using namespace std; 

int solve(vector< int > & A){
	int k = 0; 
	int n = A.size(); 
	for(int i = 0 ; i < n ; i++){
		if(i < n - 2  && A[i] == A[i + 1] && A[i] == A[i+2]) continue; 
		else A[k++] = A[i]; 
	}
	return k;
}
int main(){
	int n; cin >> n; 
	vector<int>nums; 
	for(int i = 0 ; i < n ;i++) cin >> nums[i]; 
	int k = solve(nums);
	for(int i = 0 ; i < k ;i++)
		cout << nums[i] << " "; 
	cout << endl;
	
	return 0; 
}
