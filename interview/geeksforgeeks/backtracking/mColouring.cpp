// this is the naive appraoch to solve m coloring problem
#include<bits/stdc++.h> 
using namespace std; 
const int nax = 2e5 + 7; 
const int size =  100; 
 
bool isSafe(vector< vector< int > >&graph , int numOfNodes , vector< int > &color){
	for(int i = 0 ; i < numOfNodes ; i++){
		for(int j = i + 1 ; j < numOfNodes ; j++){
			if(graph[i][j] && color[i] == color[j]) 
						return false; 
		}
	}
	return true; 
}
bool solve(int m , int numOfNodes , vector<vector< int > >&graph , vector< int > & color , int pos){
	if(pos == numOfNodes){
		if(isSafe(graph , numOfNodes , color))
			return true; 
		return false; 
	}
	for(int i = 1 ; i <= m ; i++){
		color[pos] = i;
		if(solve(m , numOfNodes , graph , color , pos + 1))
			return true; 
		color[pos] = 0; 
	}	
	return false; 
}
int main(){
    int numOfNodes , numOfEdges;
    cin >> numOfNodes >> numOfEdges; 
    vector< vector< int > > graph(numOfNodes + 1 , vector< int > (numOfNodes + 1));
    for(int i = 0 ; i < numOfEdges ; i++){
		int u , v; 
		cin >> u >> v; 
		u
		v--; 
		graph[u][v] = 1; 
		graph[v][u] = 1; 
	}	
	int m; 
	cin >> m;
	vector< int > color(numOfNodes); 
	bool ans = solve(m ,numOfNodes , graph , color , 0 );
	if(ans){
		cout << "graph can be colored using " << m << " colors" << endl; 
		for(int i = 0 ;  i < numOfNodes ; i++) 
			cout << color[i] << " "; 
	}
	else 
		cout << "forget about coloring it using " << m << " colors" << endl; 
	return 0; 
}
