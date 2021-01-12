#include<bits/stdc++.h> 
using namespace std; 

int solve(vector<vector<int>>& matrix) {
   int n = matrix.size(); 
   if(n == 0) return 0; 
   int m = matrix[0].size();   
   for(int i = 0 ; i < n ; i++){
       for(int j = 0 ;j < m ; j++){
           if(i == 0 && j == 0) continue; 
           if(i == 0) matrix[i][j] += matrix[i][j-1]; 
           else if(j == 0) matrix[i][j] += matrix[i-1][j];
           else{
               matrix[i][j] += max(matrix[i-1][j] , matrix[i][j-1]); 
           } 

       }
   }
   return matrix[n-1][m-1]; 
}
int main(){ 
		int n , m; 
		cin >> n >> m; 
		vector< vector< int > > matrix(n , vector< int > (m)); 
		int ans = solve(matrix); 
		cout << ans << endl; 
		return 0; 
}
