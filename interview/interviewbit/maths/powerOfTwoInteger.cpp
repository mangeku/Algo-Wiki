#include<bits/stdc++.h> 
using namespace std; 

bool solve(int A){
	if(A == 1) return true;
	for(int i = 2 ; i*i <= A ; i++){
		int x = A; 
		while(x%i == 0){
			x /= i; 
		}
		if(x == 1) return true; 
	} 
	return false;
	
}
int main(){
	int A; 
	cin >> A;
	bool ans = solve(A);
	if(ans) cout << "Yes it is possible" << endl; 
	else cout << "Not possible" << endl; 
	return 0; 
}
