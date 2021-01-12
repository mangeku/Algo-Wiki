#include<bits/stdc++.h> 
using namespace std; 
typedef long long ll; 
int solve(int A , int B){
	ll ans = 1; 
	for(int i = A ; i <= A + B - 2 ; i++){
		ans *= i; 
		ans /= (i-A+1); 
	}
	return (int)ans; 
}

int main(){
	int A , B; 
	cin >> A >> B; 
	cout << solve(A,B); 

	return 0; 
}
