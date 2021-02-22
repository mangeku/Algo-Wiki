#include<bits/stdc++.h>
using namespace std; 

int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
	int n; 
	cin >> n; 
	int a[n] , b[n] , c[n] , d[n]; 
	for(int i = 0 ; i < n ; i++) cin >> a[i] >> b[i] >> c[i] >> d[i]; 
	map< int , int > mp; 
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++){
			mp[a[i] + b[j]]++;
		}
	}
	int ans = 0; 
	for(int i = 0 ; i < n ;i++){
		for(int j = 0 ; j < n ; j++){
			int temp = c[i] + d[j]; 
			ans += mp[-1*temp]; 
		}
	}
	cout << ans << endl; 
	
	return 0; 
}
