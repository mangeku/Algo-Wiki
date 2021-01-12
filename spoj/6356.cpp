#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll;
const int nax = 2e6 + 5; 
ll a[nax] , b[nax] , tree[nax]; 
ll n;  
ll findSum(int i){
	ll sum = 0; 
	while(i > 0){
		sum += tree[i]; 
		i -= (i&-i); 
	}
	return sum; 
}

void update(int val , int ind){
	while(ind <= n){
		tree[ind] += val; 
		ind += (ind&-ind); 
	}
}
int main(){
	int t; 
	cin >> t; 
	while(t--){ 
		cin >> n;
		memset(tree,0,sizeof(tree)); 
		for(int i = 0 ; i < n ; i++) 
		{
			cin >> a[i]; 
			b[i] = a[i]; 
		} 
		sort(b , b + n); 
		for(int i = 0 ; i < n ; i++){
			int ind = lower_bound(b,b+n,a[i])-b; 
			a[i] = ind + 1; 
		}
		ll ans = 0; 
		for(int i = n - 1 ; i >= 0 ; i--){
			ans += findSum(a[i] - 1); 
			update(1,a[i]); 
			 
		}
		cout << ans << endl; 
	}
	
	return 0; 
}
