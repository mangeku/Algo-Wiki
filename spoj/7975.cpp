#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int n; 
	while(cin >> n){
		if(n == 0) break; 
		ll arr[n][3]; 
		for(int i = 0 ; i < n; i++){
			for(int j = 0 ; j < 3 ; j++){
				cin >> arr[i][j]; 
			}
		}
		for(int i = 1 ; i < n ;i++){
			for(int j = 0 ; j < 3 ; j++){
				arr[i][j] += min(min({arr[i-1][max(0,j-1)] , arr[i-1][j] , arr[i-1][min(2,j+1)]}), arr[i][max(0,j-1)]);
			}
		}
		cout << arr[n-1][1] << endl; 
	}
	
	
	return 0; 
}
