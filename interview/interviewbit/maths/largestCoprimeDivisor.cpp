#include<bits/stdc++.h> 
using namespace std; 

int solve(int A , int B){
	while(__gcd(A,B) != 1){
		A /= __gcd(A,B);
	}
	return A; 
}
int main(){
	int A , B; 
	cin >> A >> B;
	int ans = solve(A,B); 
	cout << ans << endl; 
	
	return 0; 
}
