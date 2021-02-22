#include<bits/stdc++.h> 
using namespace std; 
const int inf = 1e8+7; 
int main(){
	int n , e , t , m; 
	cin >> n >> e >> t >> m; 
	vector< pair< int , int > > graph[n + 1]; 
	int dis[n+1]; 
	for(int i = 1 ; i <= n ; i++) dis[i] = inf; 
	int u , v , w; 
	for(int i = 0 ; i < m ; i++){
		cin >> u >> v >> w; 
		graph[v].push_back({u,w});
	}
	set< pair< int , int > > st; 
	st.insert({0,e}); 
	for(int i = 1 ; i <= n ; i++){
		if(i == e) continue; 
		st.insert({inf,i});
	}
	dis[e] = 0; 
	while(!st.empty()){
		pair< int , int > cur = *st.begin(); 
		st.erase(st.begin()); 
		int node = cur.second; 
		for(auto it : graph[node]){
			int x = it.first , y = it.second; 
			if(dis[node] + y < dis[x]){
				st.erase({dis[x],x});
				dis[x] = dis[node] + y; 
				st.insert({dis[x],x});
			}
		}
	}
	int ans= 0; 
	for(int i = 1 ; i <= n ; i++){
		if(dis[i] <= t)
			ans++; 
	}
	cout << ans << endl; 
	return 0; 
}
