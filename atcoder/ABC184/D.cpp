#include<bits/stdc++.h> 
using namespace std; 
long double dp[101][101][101]; 
int main(){
	int x , y , z; 
	cin >> x >> y >> z; 
	for(int i = 100 ; i >= 0 ; i--){
		for(int j = 100 ; j >= 0 ; j--){
			for(int k = 100 ; k >= 0 ; k--){
				
				if(i == 100 || j == 100 || k == 100) dp[i][j][k] = 0; 
				else{
					long double cnt = i + j + k; 
					dp[i][j][k] =(i/cnt)*(dp[i+1][j][k] + 1) + (j/cnt)*(dp[i][j+1][k]+1) + (k/cnt)*(dp[i][j][k+1]+1); 
				}
			}
		}
	}
	cout<< fixed << setprecision(15) << dp[x][y][z] << endl; 
	return 0; 
}
