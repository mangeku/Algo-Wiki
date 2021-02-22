#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		unordered_map< int , int > mp; 
		int num; 
		for(int i = 0 ; i < n ; i++){
			cin >> num; 
			mp[num]++; 
		}
		int ans = -1; 
		for(auto it : mp){
			if(it.second > (n/2)){
				ans = it.first; 
			}
		}
		if(ans != -1){
			cout << "YES" << " " << ans << endl; 
		}
		else{
			cout << "NO" << endl; 
		}
	}
	
	
	
	return 0; 
}
