#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	cin >> n;
	string s[n];  
	map< string , int > mp; 
	for(int i = 0 ;i < n ;i++){
		cin >> s[i]; 
		if(s[i][0] == '!') mp[s[i].substr(1)]++; 
	}
	for(int i = 0 ; i < n ; i++){
		if(s[i][0] != '!' && mp.find(s[i]) != mp.end()){
			cout << s[i] << endl;
			return 0; 
		} 
	}
	cout << "satisfiable" << endl; 
	
	return 0; 
}
