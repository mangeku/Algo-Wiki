#include<bits/stdc++.h> 
using namespace std; 

void solve(vector<int>&A , vector<int>&B){
	int n = A.size(); 
	int m = B.size(); 
	int k = m + n - 1; 
	A.resize(m + n);
	int i = n - 1; 
	int j = m - 1;  
	while(j >= 0){
		if(i >= 0 && A[i] > B[j])
			A[k--] = A[i--]; 
		else
			A[k--] = B[j--]; 
	}
	
}
int main(){
	int n , m; 
	cin >> n >> m; 
	vector< int > A(n),B(m); 
	for(int i = 0 ; i < n ; i++) cin >> A[i]; 
	for(int i = 0 ; i < m ; i++ ) cin >> B[i]; 
	solve(A,B); 
	int sz = A.size(); 
	for(int i = 0 ;i < sz ; i++) cout << A[i] << " "; 
	cout << endl; 
	return 0; 
}
