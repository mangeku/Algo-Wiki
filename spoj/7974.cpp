#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	while(cin >> n){
		if(n == -1) break; 
		vector< int > v(n); 
		int sum = 0; 
		for(int i = 0 ; i < n ; i++){
			 cin >> v[i]; 
		     sum += v[i]; 
		}
		if(sum%n) cout << -1 << endl; 
		else{
			int ans = 0; 
			int togive = sum/n; 
			for(int i = 0 ;i < n ; i++){
				ans += max(0 , v[i] - togive); 
			}
			cout << ans << endl; 
		}
		
	}
	
	return 0; 
	
}
