#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	ll n , m ; 
	cin >> n >> m; 
	if(m == 0){
		cout << 1 << endl; 
		return 0; 
	}
	vector< ll > a(m + 2);
	for(int i = 1 ; i <= m ;i++)	
		cin >> a[i]; 
	ll ans = 0; 
	ll k = 1e9 + 7; 
	a[0] = 0; 
	a[m + 1] = n + 1;
	sort(a.begin(),a.end()); 
	for(int i = 0 ; i <= m ; i++){
		if(a[i+1] - a[i] -1 )
		k = min(k , a[i+1] - a[i] - 1);
	}
	for(int i = 0 ; i <= m ; i++){
		if(a[i+1]-a[i]-1)
		ans += ((a[i+1]-a[i]-1+k-1)/k); 
	}
	cout << ans << endl; 
	return 0; 
}
