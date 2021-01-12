#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
ll sumOfSquares(ll n){
	ll square = 0 ; 
	while(n){
		square += ((n%10)*(n%10)); 
		n /= 10; 
	}
	return square; 
} 
int main(){
	ll n; 
	cin >> n; 
	map< ll , bool > mp;
	mp[n] = true;  
	int cnt = 0; 
	while(n != 1){
		cnt++; 
		n = sumOfSquares(n);
		//cout << n << endl;  
		if(mp.find(n) != mp.end()){
			cout << -1 << endl; 
			return 0; 
		}
		mp[n] = true; 
	}
	cout << cnt << endl;  
	return 0; 
	
}
