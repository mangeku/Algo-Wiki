#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	ll n , m , t; 
	cin >> n >> m >> t;  
	ll pre = 0; 
	bool flag = true; 
	ll maxi = n; 
	for(int i = 0 ; i < m ; i++){
		ll a , b;
		cin >> a >> b; 
		n = n - (a - pre); 
		if(n <= 0) flag = false; 
		n = min(maxi , n +(b - a));
		pre = b; 
	}
	n = n - (t - pre); 
	if(n <= 0) flag = false; 
	if(flag) cout << "Yes" << endl; 
	else cout << "No" << endl; 
	return 0; 
}
 
