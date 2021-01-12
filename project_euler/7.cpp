#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
bool isPrime(ll val){
	for(ll i = 2 ; i * i <= val ; i++){
		if(val%i==0) return false; 
	}
	return true; 
}
int main(){
	ll num = 2; 
	ll cnt = 1; 
	while(cnt != 10001){
		num++;
		if(isPrime(num)) cnt++; 
		
	}
	cout << num << endl;
	
	return 0; 
}
