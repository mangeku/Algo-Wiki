#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll n; 
		cin >> n; 
		ll sum = 0,x; 
		for(int i = 0;i < n;i++){
			cin >> x; 
			sum += x; 
			sum %= n; 
		}
		if(sum%n == 0) cout << "YES" << endl; 
		else cout << "NO" << endl; 
	}
	
	return 0; 
}
