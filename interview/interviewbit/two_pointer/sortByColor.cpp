#include<bits/stdc++.h> 
using namespace std; 

void solve(vector<int> & A){
	int n = A.size(); 
	int i = 0 , j = n - 1; 
	int k = 0; 
	while(k<=j){
		if(A[k] == 0){
			swap(A[k++],A[i++]); 
		}
		else if(A[k] == 2){
			swap(A[k],A[j--]);
		}
		else{
			k++; 
		}
	}
}
int main(){
	int n; 
	cin >> n; 
	vector< int  > A(n);
	for(int i = 0 ; i < n ; i++) cin >> A[i];
	solve(A); 
	for(int i = 0 ;i < n ; i++)
		cout << A[i] << " "; 
	cout << endl; 
	
	
	return 0; 
}
