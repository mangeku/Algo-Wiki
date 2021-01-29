//SHPATH
#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		string s[nax]; 
		map< string , int > mp; 
		for(int i = 1 ; i <= n ; i++){
			string s; 
			cin >> s; 
			mp[s] = i; 
			int k; 
			cin >> k; 
			for(int j = 0 ; j < k ; j++){
				int v , w; 
				cin >> v >> w; 
				graph[i].push_back({v,w}); 
			}
			
		}
	}
	
	return 0; 
}
