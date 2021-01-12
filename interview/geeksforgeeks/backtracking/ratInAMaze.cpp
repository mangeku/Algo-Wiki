#include<bits/stdc++.h> 
using namespace std;


void solve(vector<string> &paths,string toPush,int side,vector<vector< int>> &maze, int i , int j)
{
			
			if(i < 0 || j < 0 || i >= side  || j >= side  || maze[i][j] == 0) return ; 
			if(i == side-1 && j == side-1){
				paths.push_back(toPush);
				return ; 
			} 
			maze[i][j] = 0; 
			solve(paths,toPush + "U" , side , maze , i - 1 , j);
			solve(paths,toPush + "D" , side , maze , i + 1 , j);
			solve(paths,toPush + "R" , side , maze , i , j + 1);
			solve(paths,toPush + "L" , side , maze , i , j - 1);
			maze[i][j] = 1; 
			
			
}

 
int main(){
	int side; 
	cin >> side; 
	vector< vector< int > > maze(side , vector< int > (side));
	for(int i = 0 ; i < side ; i++)
		for(int j = 0 ; j < side ; j++)
			cin >> maze[i][j]; 
	vector< string > paths; 
	string s = "";
	solve(paths, s , side , maze , 0 , 0); 
	if(paths.size() == 0)
		cout << "No paths exist" << endl; 
	else
		for(int i = 0 ; i < (int)paths.size() ; i++)
			cout << paths[i] << " "; 
}


