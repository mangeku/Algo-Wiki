#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int main(){
	int t; 
	cin >> t; 
	while(t--){
		int n; 
		cin >> n; 
		int temp = n; 
		int i; 
		for( i = 1 ; i < n ; i++){
			n -= i; 
		}
		if(i%2){
			cout << "TERM " << temp << " IS " << i-n+1 << "/" << n << endl; 
		}
		else{
			cout << "TERM " << temp << " IS " << n << "/" << i - n + 1 << endl; 

		}
	}
	return 0; 
}
