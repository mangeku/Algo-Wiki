#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
bool solve(ll n){
	int l = 0 , r = n; 
	n = (n-1)/6; 
	while(l <= r){
		ll mid = l + (r - l)/2; 
		if(mid*(mid+1)/2 == n) return true; 
		else if(mid*(mid+1)/2 > n) r = mid - 1;
		else l = mid + 1; 
	}
	return false; 
}
int main(){
	ll n; 
	while(cin >> n){
		if(n == -1) break; 
		if((n-1)%6!=0) cout << "N" << endl; 
		else{
			bool ans = solve(n); 
			if(ans == true) cout << "Y" << endl; 
			else cout << "N" << endl; 
		} 
	}
	return 0; 
	
}
