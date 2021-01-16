#include<bits/stdc++.h> 
using namespace std; 
void dfs(vector< vector< int > > &graph , vector< int >&vis , int u , int color , bool & ans){
	vis[u] = color; 
	for(auto v : graph[u]){
		if(vis[v] == color) ans = true; 
		if(vis[v] == -1) dfs(graph,vis,v,1-color,ans);
	}
}
int main(){
	int t; 
	cin >> t; 
	for(int test = 1 ; test <= t ; test++){
		int n , m; 
		cin >> n >> m;
		vector<vector<int>> graph(n + 1 , vector< int > ()); 
		vector< int > vis(n + 1 , -1); 
		//for(int i = 1 ; i <= n ; i++) cout << vis[i] << " " << endl; 
		for(int i = 0 ; i < m ; i++){
			int u , v; 
			cin >> u >> v; 
			graph[u].push_back(v); 
			graph[v].push_back(u); 
		}
		bool ans = false; 
		for(int i = 1 ; i <= n ; i++){
			if(vis[i] == -1){
				dfs(graph,vis,i,0,ans);
			}
		}
		if(!ans){
			printf("Scenario #%d:\nNo suspicious bugs found!",test); 
		}
		else{
			printf("Scenario #%d:\nSuspicious bugs found!",test); 
		}
		printf("\n");
	}
}
