#include<bits/stdc++.h> 
using namespace std; 

int Solution::solve(int A) {
    int cnt = 0; 
    while(!(A&1)){
        cnt++; 
        A = A>>1; 
    }
    return cnt; 
}
int main(){
	int a; cin >> a; 
	int ans = solve(a); 
	cout << ans << endl; 
}
