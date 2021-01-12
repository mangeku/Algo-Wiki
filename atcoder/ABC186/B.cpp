#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int r ,c ; 
	cin >> r >> c; 
	int a[r][c]; 
	int mini = INT_MAX; 
	for(int i = 0 ; i < r ; i++){
		for(int j = 0 ; j < c ; j++)
		{
			cin >> a[i][j]; 
			mini = min(mini , a[i][j]);
		}
	}
	int ans = 0; 
	for(int i = 0 ; i < r ; i++)
	{
		for(int j = 0 ; j < c ; j++){
			ans += max(0 , a[i][j] - mini);
		}
	}
	cout << ans << endl; 
	return 0; 
}
