#include<bits/stdc++.h> 
using namespace std; 

typedef long long ll; 
 
int main(){
	int t; 
	cin >> t; 
	for(int i = 1 ; i <= t ; i++){
		int a , b , c; 
		cin >> a >> b >> c; 
		int gcd = __gcd(a , b); 
		cout << "Case " << i << ": "; 
		if(c%gcd) cout << "No" << endl; 
		else cout << "Yes" << endl; 
	}
	return 0; 
}
