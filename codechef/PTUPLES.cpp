#include<bits/stdc++.h> 
using namespace std; 

const int nax = 1000006; 
vector< bool > isPrime(nax + 1 , true);   
void seive(){
	isPrime[0] = isPrime[1] = false; 
	
	for(int i = 2 ; i*i <= nax ; i++){
		if(isPrime[i]){
			for(int j = i*i ; j <= nax ; j += i){
				isPrime[j] = false; 
			}
		}
	}
}

int main(){
	 ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL); 
	seive(); 
	int ans[nax] = {0}; 
	for(int i = 3 ; i + 2 <= nax ; i++){
		if(isPrime[i] && isPrime[i-2]){
			ans[i] = ans[i-1] + 1; 
		}
		else{
			ans[i] = ans[i - 1]; 
		}
		//cout << ans[i] << endl; 
	}
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		cout << ans[n] << endl; 
	}
	
}
