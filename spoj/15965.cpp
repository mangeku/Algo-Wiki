#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
ll gcd(ll a, ll b){
	if(b == 0) return a; 
	return gcd(b,a%b);
}
int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll a , b; 
		cin >> a >> b; 
		ll lcm = (a*b)/gcd(a,b); 
		cout << lcm/a << " " << lcm/b << endl; 
	}
}
