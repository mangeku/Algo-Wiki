#include<bits/stdc++.h> 
using namespace std; 
 
int searchMatrix(vector<vector<int> > &A, int B) {
    int n = A.size(); 
    int m = A[0].size(); 
    int i = 0 , j = m - 1; 
    while(i < n && j >= 0){
        if(A[i][j] == B) return 1; 
        else if(A[i][j] < B) i++; 
        else j--; 
    }
    return 0; 
}

int main(){
	int n , m; 
	cin >> n >> m; 
	vector< vector< int >> matrix(n, vector< int> (m)); 
	for(int i = 0 ; i < n ;i++) 
		for(int j = 0 ; j < m ; j++) cin >> matrix[i][j]; 
	int B; 
	cin >> B; 
	int ans = searchMatrix(matrix, B); 
	cout << ans << endl;
	return 0; 
}
