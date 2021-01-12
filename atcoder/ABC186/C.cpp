#include<bits/stdc++.h> 
using namespace std; 
bool check(int n){
	int ot = n; 
	while(n){
		int x = n%10; 
		if(x == 7) return true; 
		n /= 10; 
	}
	while(ot){
		int x = ot%8; 
		if(x == 7) return true; 
		ot /= 8; 
	}
	return false; 
}
int main(){
	int n; 
	cin >> n;
	int ans = 0; 
	for(int i = 1 ; i <= n ; i++){
		if(!check(i))
			ans++; 
	}
	cout << ans << endl; 
	return 0; 
	
}
