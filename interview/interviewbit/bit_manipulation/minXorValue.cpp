#include<bits/stdc++.h> 
using namespace std; 

int solve(vector<int>&A){
	int ans = INT_MAX;
    int n = A.size();
    sort(A.begin() , A.end());
    for(int i = 0 ; i < n - 1 ;i++){
        ans = min(A[i] ^ A[i+1] , ans);
    }
    return ans;
}
int main(){
	int n; 
	cin >> n; 
	vector< int > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int ans = solve(arr); 
	cout << ans << endl;
	return 0; 
}
