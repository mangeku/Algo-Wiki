#include<bits/stdc++.h> 
using namespace std; 

vector<int> searchRange(const vector<int> &A, int B) {
    int l = lower_bound(A.begin(),A.end(),B) - A.begin(); 
    int r = upper_bound(A.begin(),A.end(),B) - A.begin(); 
    vector<int> ans; 
    if(A[l]!=B) return {-1,-1}; 
    ans = {l,r-1}; 
    return ans; 
}

int main(){
	int n; 
	cin >> n; 
	vector< int > a(n); 
	for(int i = 0 ; i < n ; i++) cin >> a[i]; 
	int B; 
	cin >> B; 
	vector< int > ans = searchRange(a,B); 
	int m = ans.size(); 
	for(int i = 0 ; i < m ; i++) cout << ans[i] << " "; 
	cout << endl; 
	return 0;  
}
