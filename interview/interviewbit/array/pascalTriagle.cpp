#include<bits/stdc++.h> 
using namespace std; 
void printMatrix(vector<vector<int>> &matrix){
	int n = matrix.size();
	for(int i = 0 ; i < n ; i++){
		int m = matrix[i].size();
		for(int j = 0 ; j < m ; j++){
			cout << matrix[i][j] <<" "; 
		}
		cout << endl; 
	}
}
vector<vector<int>> solve(int A){
	vector<vector<int>> ans; 
	for(int i = 0 ; i < A ; i++){
		vector<int> row(i+1);
		for(int j = 0 ; j <= i ; j++)
		{
			if(j == 0 || j == i)
				row[j] = 1; 
			else 
				row[j] = ans[i-1][j] + ans[i-1][j-1]; 
		}
		ans.push_back(row);
	}
	return ans; 
}
int main(){
	int A; 
	cin >> A; 
	vector<vector<int>> ans = solve(A);
	printMatrix(ans);

	return 0; 
}
