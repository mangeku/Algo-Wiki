#include <bits/stdc++.h>
using namespace std;
class FlightPlan {
  public:
  
  const int dx[4] = {-1, 0, 1, 0};
  const int dy[4] = {0, -1, 0, 1};
  long long fly(int R, int C, vector <int> H, int cup, int cdn, int clr) {
	  vector< vector< int > > a(R,vector< int >(C,0)); 
	  for(int i = 0 ; i < R; i++){
		  for(int j = 0 ; j < C ; j++){
			  a[i][j] = H[i*C + j]; 
		  }
	  }
	  set< int > h;
	  for(int i = 0 ; i < R ; i++){
		  for(int j = 0 ; j < C ; j++){
			  if(a[i][j] >= max(a[0][0],a[R-1][C-1]))
				h.insert(a[i][j]); 
		  }
	  }
	  long long ans = (long long) 1e18; 
	  for(auto up : h){
		  vector<vector<int>>dis(R,vector<int>(C,-1)); 
		  dis[0][0] = 0; 
		  queue< pair< int, int >> q; 
		  q.push({0,0}); 
		  long long curAns = 0; 
		  while(!q.empty()){
			  pair<int,int> cur = q.front(); 
			  q.pop(); 
			  for(int i = 0 ; i < 4 ; i++){
				  int x = cur.first + dx[i]; 
				  int y = cur.second + dy[i]; 
				  if(x >= 0 && y >= 0 && x < R && y < C){
					  if(a[x][y] <= up && dis[x][y] != -1){
						  q.push({x,y});
						  dis[x][y] = dis[cur.first][cur.second] + 1; 
					  }
				  }
			  }
		  }
		  if(dis[R-1][C-1] == -1) continue; 
		  curAns += (up-a[0][0])*1LL*cup; 
		  curAns += (up-a[R-1][C-1])*1LL*cdn; 
		  curAns += (dis[R-1][C-1])*1LL*clr; 
		  ans = min(curAns,ans); 
	  }
	  return ans; 
  }
};
// Powered by FileEdit
// Powered by moj 4.18 [modified TZTester]

// Powered by CodeProcessor
