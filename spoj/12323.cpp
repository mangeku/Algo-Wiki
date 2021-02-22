#include<bits/stdc++.h> 
using namespace std; 
int ix[]={2,2,-2,-2,1,1,-1,-1};
int iy[]={-1,1,1,-1,2,-2,2,-2}; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		char a,b,c,d; 
		cin >> a >> b >> c >> d; 
		int sx = (a - 'a' + 1); 
		int sy = b-'0'; 
		int dx = (c - 'a' + 1); 
		int dy = d-'0'; 
		//cout << sx << " " << sy << " " << dx << " " << dy << endl;
		int dis[9][9]; 
		for(int i = 0 ; i < 9 ; i++)
			for(int j = 0 ; j < 9 ; j++) dis[i][j] = -1; 
		dis[sx][sy] = 0; 
		queue< pair< int , int > > q; 
		q.push({sx,sy}); 
		while(!q.empty()){
			pair< int , int > cur = q.front();
			q.pop(); 
			int curx = cur.first; 
			int cury = cur.second; 
			if(curx == dx && cury == dy){ break;}
			for(int i = 0 ; i < 8 ; i++){
				int nextx = curx + ix[i]; 
				int nexty = cury + iy[i]; 
				if(nextx <= 0 || nexty <= 0 || nextx > 8 || nexty > 8) continue;
				if(dis[nextx][nexty] == -1){
					q.push({nextx,nexty}); 
					dis[nextx][nexty] = dis[curx][cury] + 1; 
				} 
			}
		}
		cout << dis[dx][dy] << endl; 
	}
}
