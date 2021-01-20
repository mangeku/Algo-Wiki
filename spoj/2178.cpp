#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int n , m; 
	while(cin >> n >> m){
		if(n == 0 && m == 0) break; 
		vector< int > a(n) , b(m); 
		for(int i = 0 ; i < n ; i++) cin >> a[i]; 
		for(int j = 0 ; j < m ; j++) cin >> b[j]; 
		sort(a.begin(),a.end()); 
		sort(b.begin(),b.end()); 
		if(a[0] < b[1]) cout << "Y" << endl; 
		else cout << "N" << endl; 
	}
	
	return 0; 
}
