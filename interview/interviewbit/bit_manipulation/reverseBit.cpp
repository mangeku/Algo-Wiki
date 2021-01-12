#include<bits/stdc++.h> 
using namespace std; 

unsigned int solve(unsigned int a ){
	unsigned int ans = 0; 
	for(int i = 0 ; i < 32 ; i++){
		int k = (a&1);
		a >>= 1; 
		ans |= k; 
		ans <<= 1; 
	}
	return ans; 
}
int main(){
	unsigned int a; 
	cin >> a; 
	unsigned int ans = solve(a); 
	cout << ans << endl;
	return 0;
}
