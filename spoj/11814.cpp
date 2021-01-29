#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
const int nax = 1e6 + 7; 
int n , m; 
bool check(ll x , vector< ll > &arr){
	ll ans = 0; 
	for(int i = 0 ; i < n ; i++){
		ans += max(0LL,arr[i] - x); 
	}
	return ans >= m; 
}
int main(){
	cin >> n >> m;
	vector< ll > arr(n);  
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	sort(arr.begin() , arr.end()); 
	ll lo = 0 , hi = arr[n-1]; 
	ll ans = 0; 
	while(lo <= hi){
		ll mid = lo + (hi - lo)/2;
		if(check(mid,arr)){
			ans = mid; 
			lo = mid + 1; 
		}
		else{
			hi = mid - 1; 
		}
	}
	cout << ans << endl;
}
