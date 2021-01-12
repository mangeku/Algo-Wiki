#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int gcd( ll a , ll b){
	if(b == 0) return a; 
	return gcd(b,a%b);
}
int main(){
	ll lcm = 1;
	for(ll i = 2 ; i <= 20 ; i++){
		lcm = ((lcm*i)/gcd(lcm,i));
	}
	cout << lcm << endl; 
	return 0; 
}
