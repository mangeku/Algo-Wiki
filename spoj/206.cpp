#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m; 
		cin >> n >> m ;
		string s[n]; 
		for(int i = 0 ; i < n ;i++){
			cin >> s[i]; 
		}
		vector< pair< int , int > > ones; 
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ; j++){
				if(s[i][j] == '1') ones.push_back({i,j}); 
			}
		}
		for(int i = 0 ; i < n ; i++){
			for(int j = 0 ; j < m ;j++){
				if(s[i][j] == '1'){
					cout << 0 << " "; 
				}
				else{
					int ans = INT_MAX;
					for(int k = 0 ; k < (int) ones.size(); k++){
						ans = min(ans , abs(i-ones[k].first) +  abs(j-ones[k].second));
					}
					cout << ans <<" "; 
				}
			}
			cout << endl; 
		}
	}
	return 0; 
}
