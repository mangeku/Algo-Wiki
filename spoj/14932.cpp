//SHPATH
#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int nax = 
int timer; 
vector< int > tin() , tout; 
vector< vector< int > > up(x , vector< int > ()): 
void init(){
	timer = 0; 
	memset(tin , 0 , sizeof(tin)); 
	memset(tout , 0 , sizeof(tout)); 
	memset(up , 0 , sizeof(up)); 
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		init();
		int n; 
		cin >> n; 
		vector< int > graph[n + 1]; 
		for(int i = 1 ; i <= n ; i++){
			int m; 
			cin >> m; 
			for(int j = 0 ; j < m ; j++){
				int x; 
				cin >> x; 
				graph[i].push_back(x); 
			}
		}
		dfs(1 , -1 , graph);
		int q; 
		cin >> q; 
		for(int i = 0 ; i < q; i++){
			int l , r; 
			cin >> l >> r; 
			cout << lca(l , r , graph) << endl; 
		}
		
	}
	
	return 0; 
}
