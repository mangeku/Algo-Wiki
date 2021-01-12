#include<bits/stdc++.h> 
using namespace std; 

void printMatrix(vector< vector< int > > &matrix){
	int n = matrix.size();
	int m = matrix[0].size();
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++)
			cout << matrix[i][j] << " "; 
		cout << endl; 
	}
	
}

vector<vector<int>> generateMatrix(int A){
	vector<vector<int>> ans(A , vector< int > (A));
	int l = 0 , top = 0 , right = A - 1, bottom = A - 1;
	int cnt = 1;  
	while(l <= right && top <= bottom){
		for(int i = l ; i <= right ; i++){
			ans[top][i] = cnt++; 
		}
		top++; 
		for(int i = top ; i <= bottom ; i++){
			ans[i][right] = cnt++; 
		}
		right--; 
		if(bottom > top){
			for(int i = right ; i >= l ; i--){
				ans[bottom][i]=cnt++; 
			}
			bottom--; 
		}
		if(l < right){
			for(int i = bottom ; i >= top ; i--){
				ans[i][l] = cnt++; 
			}
			l++; 
		}
	}
	return ans; 
	
}
int main(){
	int A; 
	cin >> A; 
	vector< vector< int > > ans = generateMatrix(A);
	printMatrix(ans);
	return 0; 
}
