#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n; 
	while(cin >> n){
		if(n == 0) return 0; 
		vector< int > a(n + 1); 
		map< int , int > mp;
		for(int i =  1; i <= n ; i++){
			cin >> a[i]; 
			mp[a[i]] = i; 
		}
		int j = 1; 
		for(j = 1 ; j <= n ; j++){
			if(mp[j] != a[j]) break; 
		}
		if(j == n + 1) cout << "ambiguous" << endl; 
		else cout << "not ambiguous" << endl; 
	}
	
	
	return 0; 
	
}
