#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
const int nax = 2e5 + 7; 
vector< int > g[nax];  
int maxi,node; 
int n; 
void dfs(int u , int p ,  int d){
	if(d > maxi){
		maxi = d; 
		node = u; 
	}
	for(auto it : g[u]){
		if(it != p){
			dfs(it,u,d+1); 
		}
	}
}
int main(){
	cin >> n; 
	for(int i = 0 ; i < n -1 ; i++){
		int u , v; 
		cin >> u >> v; 
		g[u].push_back(v); 
		g[v].push_back(u);
	}
	dfs(1,-1,0); 
	dfs(node,-1,0); 
	cout << maxi << endl; 
	return 0; 
}
