#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
int cnt = 0; 
void printBoard(vector< vector< int > > & board , int n){
	for(int i = 0 ; i < n ; i++){
		for(int j = 0 ; j < n ; j++)
			cout << board[i][j];
		cout << endl; 
	
	}
	cout << "==========================================================" << endl; 
}  
bool safe(vector< vector< int> > &board , int n){
	map< int , int > row , col , ldia , rdia; 
	for(int i = 0 ; i < n ; i++)
	{
		for(int j = 0 ; j < n ;j++){
				if(board[i][j] == 1){
					row[i]++; 
					col[j]++;
					ldia[i+j]++; 
					rdia[i-j]++; 
				}
		}
	}
	for(auto it : row){
		
		if(it.second > 1) return false; 
 	}
 	for(auto it : col){
	
		if(it.second > 1) return false; 
 	}
	for(auto it : ldia){
		
		if(it.second > 1) return false; 
	}
	for(auto it : rdia){
		
		if(it.second > 1) return false; 
	}
	return true; 
}
void solve(int n , int i , vector< vector< int> > &board){
	if(!safe(board , n)) return ; 
	if(i == n){
		printBoard(board , n);
		cnt++; 
		return ; 
	}
	
	 for(int j = 0 ; j < n ; j++){ 
			board[i][j] = 1; 
			solve(n , i + 1 , board);
			board[i][j] = 0; 	
	}
}
void nQueen(int n){
     vector< vector< int >> board( n , vector< int > (n));
     for(int i = 0 ; i < n ; i++)
		for(int j = 0 ; j < n ; j++)
			board[i][j] = 0; 
	 solve(n , 0 , board);
}

int main(){
		int N;
		cin >> N; 
		nQueen(N);
		cout << "total number of solution is : " << cnt << endl; 
}
