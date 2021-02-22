#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n , m; 
	cin >> n >> m; 
	int arr[n][m]; 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			cin >> arr[i][j]; 
		}
	}
	for(int i = 1 ; i < n ; i++){
		for(int j = 0 ; j < m ; j++){
			arr[i][j] += min({arr[i-1][max(j-1,0)],arr[i-1][j] , arr[i-1][min(j+1,m-1)]}); 
		}
	}
	int ans = INT_MAX; 
	for(int j = 0 ; j < m ; j++){
		ans = min(ans , arr[n-1][j]); 
	}
	cout << ans << endl;
	
	return 0; 
}
