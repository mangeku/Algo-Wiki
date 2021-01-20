#include<bits/stdc++.h> 
using namespace std; 
map< int , string > mp; 


int main(){
	// TTT, TTH, THT, THH, HTT, HTH, HHT and HHH
	mp[0] = "TTT"; 
	mp[1] = "TTH"; 
	mp[2] = "THT"; 
	mp[3] = "THH"; 
	mp[4] = "HTT"; 
	mp[5] = "HTH"; 
	mp[6] = "HHT";
	mp[7] = "HHH";  
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		string s; 
		cin >> s;
		int cnt[8] = {0}; 
		for(int i = 0 ; i < 8 ; i++){
				for(int j = 0 ; j < 38 ; j++){
					if(s.substr(j,3) == mp[i]) cnt[i]++; 
				}
		}
		cout << n << " "; 
		for(int i = 0 ; i < 8 ; i++) cout << cnt[i] << " "; 
		cout << endl; 
	}
	
	
	return 0; 
}
