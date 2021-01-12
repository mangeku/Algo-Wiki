#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(vector< int > & A, vector< int> & B){
	int i = 0 , j = 0; 
	int n = A.size() , m = B.size(); 
	sort(A.begin(),A.end());
	sort(B.begin(),B.end());
	vector< int > ans;
	while(i < n && j < m){
		if(A[i] == B[j]){
			ans.push_back(A[i]);
			i++ , j++; 
		}
		else if(A[i] < B[j]){
			i++; 
		}
		else{
			j++; 
		}
	}
	return ans; 
}
int main(){
	int n , m ; 
	cin >> n >> m; 
	vector<int > A(n) , B(m); 
	for(int i = 0 ; i < n ; i++) cin >> A[i]; 
	for(int i = 0 ; i < m ; i++) cin >> B[i]; 
	vector< int > ans = solve(A,B); 
	int sz = ans.size(); 
	for(int i = 0 ; i < sz ; i++) 
		cout << ans[i] <<" " ;
	cout << endl; 
	return 0; 
	
}
