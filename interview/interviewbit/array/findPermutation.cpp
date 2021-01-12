#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(string s, int n){
	int l = 1 , r = n; 
	vector< int > ans; 
	for(int i = 0 ; i < (int) s.size(); i++){
		if(s[i] == 'I'){
			ans.push_back(l); 
			l++; 
		}
		else{
			ans.push_back(r); 
			r--; 
		}
	} 
	ans.push_back(r);  
	return ans; 
}
int main(){
	int n; 
	cin >> n; 
	string s; 
	cin >> s; 
	vector<int> ans = solve(s ,n ); 
	for(int i = 0 ; i < n ; i++) cout << ans[i] <<" "; 
	cout << endl; 
	return 0; 
}
