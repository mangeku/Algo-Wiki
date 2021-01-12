#include<bits/stdc++.h> 
using namespace std; 
vector<int> solve(int n){
	vector< bool > primes(n + 1 , true); 
	primes[1] = false; 
	primes[0] = false; 
	for(int i = 2 ; i * i <= n ; i++){
		if(primes[i]){
			for(int j = i * i ; j <= n ; j+= i){
				primes[j] = false; 
			}
		}
	}
	vector<int> ans; 
	for(int i = 2; i <= n - 2; i++){ 
			if(primes[i] && primes[n-i])
			{
				ans = {i,n-i}; 
				return ans; 
			}
	}
	return ans; 
	
}
int main(){
	int n; 
	cin >> n; 
	vector< int > ans = solve(n);
	if((int)ans.size() == 0){
		cout <<"Not Possible" << endl; 
	} 
	else cout << ans[0] <<" " << ans[1] << endl; 
	return 0; 
}
