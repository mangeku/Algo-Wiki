#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll n; 
		cin >> n; 
		cout << n*(n+2)*(2L*n+1)/8 << endl; 
	}
	
	return 0; 
	
}
