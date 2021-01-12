#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int n;
	cin >> n;
	ll ans = 0;  
	for(int i = 1 ;i*i <= n; i++){
		ans += (n/i - i + 1); 
	}
	cout << ans << endl; 
	
	return 0; 
}
