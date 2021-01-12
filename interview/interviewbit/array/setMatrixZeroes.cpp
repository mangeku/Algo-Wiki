#include<bits/stdc++.h> 
using namespace std; 
// this solution have space complexity 0(n + m) we can reduce it by using first row and column for the same purpose we used extra space
void solve(vector<vector<int>> &A){
	int n = A.size(); 
   int m = A[0].size(); 
   vector< int > row(n + 1 , 0); 
   vector< int > col(m + 1 , 0); 
   for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
           if(A[i][j] == 0){
               row[i] = 1; 
               col[j] = 1; 
           }
       }
   }
   for(int i = 0 ; i < n ; i++){
       for(int j = 0 ; j < m ; j++){
           if(row[i] == 1 || col[j] == 1){
               A[i][j] = 0; 
           }
       }
   }
}
int main(){
	int n , m; 
	cin >> n >> m; 
	vector< vector<int> > matrix(n , vector< int > (m)); 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> matrix[i][j]; 
		}
	}
	solve(matrix); 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cout << matrix[i][j] <<" "; 
		}
		cout << endl; 
	}
	
	return 0; 
}
