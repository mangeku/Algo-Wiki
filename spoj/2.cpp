#include<bits/stdc++.h> 
using namespace std; 


int main(){ 
	int t; 
	cin >> t; 
	while(t--){
		int x ,y ; 
		cin >> x>> y; 
		if(x != y && y != (x-2)) cout << "No Number" << endl; 
		else{
	
			if(x&1) cout << x + y - 1 << endl; 
			else cout << x + y << endl; 	
		}
	}
	
	return 0; 
}
