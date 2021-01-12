#include<bits/stdc++.h> 
using namespace std; 
int solve(const vector<int> &A, const vector<int> &B, const vector<int> &C) {
    int i = 0 , j = 0 , k = 0; 
    int l = A.size() , m = B.size() , n = C.size(); 
    int ans = INT_MAX; 
    while(i < l && j < m && k < n){
        int maxi = max({A[i],B[j],C[k]}); 
        int mini = min({A[i],B[j],C[k]}); 
        if(maxi-mini < ans) ans = maxi - mini; 
        if(A[i] == mini) i++; 
        else if(B[j] == mini) j++; 
        else k++; 
    }
    return ans; 
}

int main(){
	int l , m , n; 
	cin >> l >> m >> n; 
	vector<int> A(l),B(m),C(n); 
	for(int i = 0 ; i < l ; i++) cin >> A[i]; 
	for(int j = 0 ; j < m ; j++) cin >> B[j]; 
	for(int k = 0 ; k < n ; k++) cin >> C[k]; 
	int ans = solve(A,B,C); 
	cout << ans <<endl; 
	return 0; 
}
