#include<bits/stdc++.h> 
using namespace std;
void solve(string s[]){
	map< int , int > col , row , ud , ld; 
	int cnt = 0; 
	for(int i = 0 ; i < 8 ; i++)
	{
		for(int j = 0 ; j < 8 ; j++){
			if(s[i][j] == '*'){
				row[i]++; 
				col[j]++; 
				ud[i+j]++; 
				ld[i-j]++; 
				cnt++; 
			}
		}
	}
	bool flag = true; 
	for(auto it: row) if(it.second > 1) flag = false; 
	for(auto it: col) if(it.second > 1) flag = false;	
	for(auto it: ud) if(it.second > 1) flag = false;
	for(auto it: ld) if(it.second > 1) flag = false;
    if(flag && cnt == 8) cout << "valid" << endl;
    else cout << "invalid" << endl;
    return ; 
}	
	 
int main(){
	string s[8]; 
	for(int i = 0 ; i < 8 ; i++)
		cin >> s[i]; 
	solve(s); 
}
