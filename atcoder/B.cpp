#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll ;
int main(){
	int n; 
	cin >> n; 
	vector< ll > a(n),b(n); 
	for(int i = 0 ; i < n ;i++) cin >> a[i]; 
	for(int j = 0 ; j < n ; j++) cin >> b[j]; 
	ll ans = 0; 
	for(int i = 0 ; i < n ; i++){
		ans += (a[i]*b[i]); 
	}
	if(ans == 0) cout << "Yes" << endl; 
	else cout << "No" << endl; 
}
