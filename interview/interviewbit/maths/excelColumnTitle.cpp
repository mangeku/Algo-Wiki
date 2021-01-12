#include<bits/stdc++.h> 
using namespace std; 
string solve(int A){
	string ans = ""; 
	while(A){
		ans = char((A-1)%26 + 'A')+ ans; 
		A = (A-1)/26; 
	}
	return ans; 
	
}
int main(){
	int A; 
	cin >> A; 
	string ans = solve(A); 
	cout << ans << endl;
	return 0; 
}
