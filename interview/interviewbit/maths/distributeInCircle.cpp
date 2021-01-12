#include<bits/stdc++.h> 
using namespace std; 
int solve(int A, int B, int C) {
    return (C + A - 1) % B; 
}

int main(){
	int A , B , C; 
	cin >> A >> B >> C; 
	int ans = solve(A,B,C); 
	cout << ans << endl; 
	return 0; 
}
