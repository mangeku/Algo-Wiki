#include<bits/stdc++.h> 
using namespace std; 


int main(){
		int t; 
		cin >> t; 
		while(t--){
			string s; 
			cin >> s; 
			string r = s; 
			reverse(s.begin() , s.end()); 
			if(s == r) cout << "YES" << endl; 
			else cout << "NO" << endl; 
		}
}
