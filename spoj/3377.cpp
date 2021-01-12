#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m; 
		cin >> n;
		vector<vector<int>> graph(n + 1 , vector< int > ()); 
		for(int i = 0 ; i < m ; i++){
			int u , v; 
			cin >> u >> v; 
			graph[u].push_back(v); 
			graph[v].push_back(u); 
		}
	}
}
