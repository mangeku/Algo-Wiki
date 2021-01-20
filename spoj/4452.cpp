#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 

int main(){
	int t; 
	cin >> t;
	while(t--){
		ll ans = 0; 
		int x; 
		cin >> x; 
		ans = x; 
		while(1){
			long long temp; 
			char op; 
			cin >> op; 
			if(op == '=') break; 
			cin >> temp; 
			if(op == '+') ans += temp; 
			else if(op == '*') ans *= temp; 
			else if(op == '/') ans /= temp; 
			else if(op == '-' ) ans -= temp; 
		}
		cout << ans << endl;
	}
}
