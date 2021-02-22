#include<bits/stdc++.h> 
using namespace std; 

int main(){
	int k , l , m; 
	cin >> k >> l >> m; 
	int res = max(k,l); 
	int arr[m]; 
	for(int i = 0 ; i < m ; i++) cin >> arr[i]; 
	for(int i = 0 ; i < m ; i++){
		if(((arr[i]+res-1)/res)%2) cout << "A"; 
		else cout << "B"; 
	}
	return 0; 
}
