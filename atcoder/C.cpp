#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int n; 
	cin >> n; 
	vector< ll >a(1 << n); 
	for(int i = 0 ; i < (1<<n) ; i++ ) cin >> a[i]; 
	ll ans = INT_MIN;
	int ind = 0;  
	for(int i = 0 ; i < (1<<(n-1)) ; i++){
		if(ans < a[i]){
			ans = a[i]; 
			ind = i + 1; 
		}
	}
	ll ans2 = INT_MIN; 
	ll ind2 = 0; 
	for(int i = (1<<(n-1)) ; i < (1<<n) ; i++){
		if(ans2 < a[i]){
			ans2 = a[i]; 
			ind2 = i + 1; 
		}
	}
	if(ans2 < ans){
		cout << ind2 << endl; 
		return 0; 
	}
	cout << ind << endl; 
}
