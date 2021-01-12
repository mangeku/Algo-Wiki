// taking too much time for 8*8 matrix board 
#include<bits/stdc++.h> 
using namespace std; 
int dx[] =  {2,-2,1,-1,2,-2,1,-1};
int dy[] =   {1,1,2,2,-1,-1,-2,-2};
bool solve(int N , int i , int j , vector< vector< int > > & board , int cur){
    	if(cur == N * N)
			return true; 
		for(int l = 0 ; l < 8 ; l++){
			int xPos = dx[l]+i; 
			int yPos = dy[l] + j; 
			if(xPos < 0 || xPos >= N || yPos < 0 || yPos >= N || board[xPos][yPos] != -1 ) 
				continue; 
			board[xPos][yPos] = cur; 
			if(solve(N , xPos , yPos , board , cur + 1))
				return true;  
			else
				board[xPos][yPos] = -1; 
		}
		return false; 
}
int main(){
	int N;
	cin >> N; 
	vector< vector< int > > board(N  + 1, vector< int > (N + 1 , -1)); 
	board[0][0] = 0; 
	bool ans = solve(N , 0 , 0 , board , 1);
	if(ans){
		cout << "solution is as follows :" << endl; 
		for(int i = 0 ; i < N ; i++){
			for(int j = 0 ; j < N ; j++){
				cout << board[i][j] << " "; 
			}
			cout << endl; 
		}
	}
	else{
		cout << "No solution exist" << endl;
	}
	return 0; 
}
