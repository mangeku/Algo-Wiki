#include<bits/stdc++.h> 
using namespace std; 
void printRow(vector< int > &row){
	if(row.size() == 0){
		cout << "empty row" << endl; 
		return ; 
	}
	int n = row.size();
	for(int i = 0 ; i < n ; i++)
		cout << row[i] << " "; 
	cout << endl; 
}
vector<int> getRow(int n){
	vector< int > ans(n + 1);
	ans[0] = 1; 
	for(int i = 1 ; i <= n ;i++){
		ans[i] = ans[i-1]*(n-i+1)/i; 
	}
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	vector< int > ans = getRow(n);
	printRow(ans);
	return 0; 
}
