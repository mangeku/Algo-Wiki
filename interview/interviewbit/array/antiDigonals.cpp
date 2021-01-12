#include<bits/stdc++.h> 
using namespace std; 
void printMatrix(vector< vector< int > > & matrix){
	int n = matrix.size();
	if(n == 0){
		cout << "Empty Matrix" << endl; 
	}
	for(int i = 0 ; i < n ; i++){
		int m = matrix[i].size();
		for(int j = 0 ; j < m ; j++){
			cout << matrix[i][j] << " ";
		}
		cout << endl; 
	}
}
vector< vector<int > > diagonal(vector<vector<int> > &matrix){
	int n = matrix.size();
	if(n == 0){
		vector<vector<int> > ans; 
		return ans; 
	}
	int m = matrix[0].size();
	vector< vector< int > > ans(n + m - 1);
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ;j++){
			ans[i+j].push_back(matrix[i][j]);
		}
	}
	return ans;
}
int main(){
	int n , m; 
	cin >> n >> m;
	vector< vector<int>> matrix(n,vector< int > (m));
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ;j++){
			cin >> matrix[i][j] ; 
		}
	}
	vector< vector< int > > ans = diagonal(matrix);
	printMatrix(ans);
	return 0; 
}
