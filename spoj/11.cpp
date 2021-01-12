#include<bits/stdc++.h>
using namespace std; 
typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int ans = 0; 
		while(n){
			ans += (n/5);
			n /= 5;  
		}
		cout << ans << endl;
	}
	return 0; 
}	
