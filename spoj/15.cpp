//SHPATH
#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int shortest(vector< pair< int , int > > graph[] , int from , int to , int n){
	priority_queue< pair< int , int > , vector< pair< int , int >> , greater< pair< int , int >> > st; 
	vector< int > dis(n + 1);  
	for(int i = 1; i <= n ; i++){
		dis[i] = 99999999; 
	}
	dis[from] = 0; 
	st.push({0 , from}); 
	while(!st.empty()){
		int u = st.top().second;
		if(u == to) return dis[u]; 
		st.pop(); 
		for(auto it : graph[u]){
			int x = it.first , y = it.second; 
			if(dis[x] > dis[u] + y){
				dis[x] = dis[u] + y; 
				st.push({dis[x],x});
			}
		}
	}
	return dis[to]; 
}
int main(){
	ios_base::sync_with_stdio(false);
    cin.tie(NULL); 
    cout.tie(NULL); 
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		map< string , int > mp; 
		vector< pair< int , int > > graph[n + 1]; 
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
		int q; 
		cin >> q; 
		for(int i = 0 ; i < q ; i++){
			string from , to; 
			cin >> from >> to; 
			cout << shortest(graph , mp[from] , mp[to] , n) << endl; 
		}
	}
	
	return 0; 
}
