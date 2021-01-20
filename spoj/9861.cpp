#include<bits/stdc++.h>
using namespace std; 
typedef long long ll; 

int main(){
	ll n , m; 
	cin >> n >> m; 
	vector< ll > arr(n); 
	for(int i = 0 ; i < n ; i++) cin >> arr[i]; 
	int i = 0 , j = 0;
	ll sum = 0 , ans = 0;  
	while(j < n){
		sum += arr[j]; 
		while(i <= j && sum > m){
			sum -= arr[i]; 
			i++; 
		}
		j++; 
		ans = max(ans,sum); 
	}
	//j++; 
	cout << ans << endl; 
}
