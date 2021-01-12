#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	while(t--){
		ll a , b , sum; 
		cin >> a >> b >> sum; 
		ll n = (sum*2)/(a+b); 
		ll d = (b-a)/(n-5); 
		cout << n << endl; 
		ll x = a - 2*d; 
		for(int i = 0 ;i < n ;i++){
			cout << x << " "; 
			x += d; 
		}
		cout << endl;
	}
}
