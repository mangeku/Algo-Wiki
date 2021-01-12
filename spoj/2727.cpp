#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n , m; 
		cin >> n >> m; 
		vector< int > a(n) , b(m); 
		for(int i = 0 ; i < n ; i++) cin >> a[i]; 
		for(int j = 0 ; j < m ; j++) cin >> b[j]; 
		int i = 0 , j = 0; 
		while(i < n && j < m){
			if(b[j] <= a[i]) j++; 
			else i++; 
		}
		if(j == m) cout << "Godzilla" << endl; 
		else cout << "MechaGodzilla" <<  endl; 
	}
	
	return 0; 
}
