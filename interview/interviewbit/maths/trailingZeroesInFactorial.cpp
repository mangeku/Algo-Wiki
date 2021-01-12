#include<bits/stdc++.h> 
using namespace std; 
int solve(int A){ 
	int ans = 0; 
	while(A){
		ans += (A/5); 
		A/=5; 
	}
	return ans; 

}
int main(){
	
	int A; 
	cin >> A; 
	int ans = solve(A); 
	cout << ans << endl;
	
	
	return 0; 
}
