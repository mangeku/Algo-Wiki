#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
char arr[52][52]; 
int vis[52][52];  
int dx[] = {1,-1,0,0,1,-1,1,-1}; 
int dy[] = {0,0,1,-1,1,1,-1,-1}; 
void dfs(int &ans , int cnt , int n , int m , int i , int j){
	vis[i][j] = 1; 
	ans = max(ans , cnt); 
	for(int it =0 ; it < 8 ; it++){
		int nexti = i + dx[it]; 
		int nextj = j + dy[it]; 
		if(nexti >= 0 && nexti < n && nextj >= 0 && nextj < m && !vis[nexti][nextj] && arr[nexti][nextj] == arr[i][j] + 1)
			dfs(ans,cnt + 1, n , m , nexti , nextj); 
	}
}
int main(){
	int n , m; 
	int num = 0; 
	while(cin >> n >> m){
		num++; 
		if(n == 0 && m == 0) break; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m; j++){
				cin >> arr[i][j]; 
			}
		}
		int ans = 0; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				memset(vis , 0 , sizeof(vis)); 
				int cnt = 1; 
				if(arr[i][j] == 'A')
					dfs(ans , cnt ,n , m , i , j); 
			}
		}
		cout << "Case " << num << ": " << ans << endl; 
	}
	return 0; 
}
