#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 1e6 + 1; 

int main(){
		int t; 
		cin >> t; 
		vector< ll > arr(nax + 1); 
		for(ll i = 0 ; i <= nax ; i++){
			ll x = 1LL*i*i; 
			arr[i] = x; 
		}
		while(t--)
		{
			ll n; 
			cin >> n; 
			ll l = 0 , r = sqrt(n) + 1; 
			bool flag = false; 
			while(l<= r){
				if(arr[l] + arr[r] == n){
					flag = true; 
					break; 
				}
				else if(arr[l] + arr[r] < n) l++; 
				else r--; 
			}
			if(flag) cout << "Yes" << endl; 
			else cout << "No" << endl; 
			
		}
		return 0; 
}
