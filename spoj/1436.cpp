#include<bits/stdc++.h> 
using namespace std;
typedef long long ll; 
const int nax = 2e5;  
vector< int > graph[nax]; 
vector< int > vis(nax);  
void dfs(int u){
	vis[u] = 1; 
	for(auto v : graph[u]){
		if(!vis[v])
			dfs(v); 
	}
}
int main(){
	int n , m; 
	cin >> n >> m; 
	if(m != (n-1)){
		cout << "NO" << endl; 
		return 0; 
	}
	
	for(int i = 1 ; i <= m ; i++){
		int x , y; 
		cin >> x >> y; 
		graph[x].push_back(y); 
	}
	int cnt = 0; 
	for(int i = 1 ; i <= n ; i++){
		if(!vis[i]){
			dfs(i); 
			cnt++; 
		}
	}
	if(cnt > 1 ) cout << "NO" << endl; 
	else cout << "YES" << endl; 
	
	return 0; 
}
