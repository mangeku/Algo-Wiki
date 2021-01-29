#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m; 
		cin >> n >> m; 
		char x; 
		int arr[n][m]; 
		int brr[n][m]; 
		int crr[n][m]; 
		int island1 = 0 , island2 = 0; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				brr[i][j] = 0; 
				crr[i][j] = 0; 
			}
		}
		int cnt = 0; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				cin >> x; 
				if(x ==  '*') arr[i][j] = 1; 
				else arr[i][j] = 0;
				cnt += arr[i][j];  
			}
			if(i % 2 == 0){
				for(int j = 0 ; j < m ; j+= 2){
					brr[i][j] = 1;  
					island1 += 1; 
				}
				for(int j = 1 ; j < m ; j += 2) {
					crr[i][j] = 1; 
					island2 += 1;
				} 
			}
			else{
				for(int j = 0 ; j < m ; j += 2){ crr[i][j] = 1 ; island2 += 1;} 
				for(int j = 1 ; j < m ; j += 2){ brr[i][j] = 1 ; island1 += 1;} 
			}
		}
		int ans = 0; 
		int cnt1 = 0 , cnt2 = 0; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cout << arr[i][j]; 
			cout << endl; 
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cout << brr[i][j]; 
			cout << endl; 
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++) cout << crr[i][j]; 
			cout << endl; 
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if(arr[i][j] != brr[i][j]) cnt1++;
				if(arr[i][j] != crr[i][j]) cnt2++; 
			}
		}
		ans = min(cnt1,cnt2); 
		cout << ans << endl; 
		//cout << max(island2,island1) - cnt;
	}
}
