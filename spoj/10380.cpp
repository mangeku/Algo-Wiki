#include<bits/stdc++.h> 
using namespace std; 
const int nax = 1e6 + 6; 
vector< int > graph[nax]; 
vector< int > vis(nax);
void dfs(int x){
	vis[x] = 1; 
	for(auto it : graph[x])
	{
		if(!vis[it]) dfs(it); 
	}
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		fill(vis.begin(),vis.end(),0);
		
		int n , m; 
		cin >> n >> m; 
		for(int i = 0 ; i < n ;i++) graph[i].clear(); 
		int u , v; 
		for(int i = 0 ; i < m ; i++)
		{
			cin >> u >> v; 
			graph[u].push_back(v); 
			graph[v].push_back(u); 
		}
		int ans = 0; 
		for(int i = 0 ; i < n ; i++){
			if(!vis[i]){
				dfs(i); 
				ans++; 
			}
		}
		cout << ans << endl; 
	}
	return 0; 
}
